// <while_stmt> -> while '(' <expression> ')' <statement>
void while_stmt(void) {
  if (nextToken != while_code) {
    error();
    }
    else{
      if (nextToken != left_Parenthesis) {
        error();
        }
        else{
          lex();
          expression();
          if (nextToken != right_Parenthesis) {
            error();
            }
            else{
              lex();
              statement();
					}
				}
			}
		}
	}


// <if_stmt> -> if '(' <expression> ')'  <statement> [else <statement>]
void if_stmt(void){
  if(nextToken != if_code)
    error();
  else{
    lex();
    if(nextToken != left_Parenthesis)
      error();
    else{
      lex();
      expression();
      if(nextToken != right_Parenthesis)
        error();
      else{
        lex();
        statement();
        if(nextToken == else_code){
          lex();
          statement();
        }
      }
    }
  }
}

// <for_stmt> -> for '(' [<expression>] ';' [<expression>] ';' [<expression>] ')' <statement>
//   <block> -> '{' {<statement>} '}'
void for_stmt(void){
  if (nextToken != for_code) {
    error();
    }
    else{
      if (nextToken != left_Parenthesis) {
        error();
        }
        else{
          lex();
          expression();
          if (nextToken != SEMICOLON ) {
            error();
            }
            else{
              lex();
              expression();
              if (nextToken != SEMICOLON ) {
                error();
            }
              else{
                lex();
                expression();
                if(nextToken != right_Parenthesis)
                error();
                else{
                  lex();
                  statement();
              }

					}
				}
			}
		}
}

//<switch_stmt> -> switch "(" <expression> ")" '{' case <literal> ":" <statement> ";" case <literal> ":" <statement> ";" default ":" <statement> ";" '}' 
void switch_stmt(void){
	if (nextToken != switch_code) {
    error();
    }
	else{
		if (nextToken != left_Parenthesis){
			error();
	}
	else{
		lex();
		expression();
	}
	else{
		if (nextToken != right_Parenthesis){
			error();
	}
	}
	else{
		if (nextToken != left_Bracket) {
        error();
        }
	}
	else{
		
	}
	
}
//<foreach_stmt> -> 

//<do_while_stmt> -> do 
//	<block> -> '{' <statement> '}' while '(' <expression> ')'
void do_while_stmt(void) {
  if (nextToken != do_while_code) {
    error();
    }
    else{
      if (nextToken != left_Bracket) {
        error();
        }
        else{
          statement();
          if (nextToken != right_Bracket) {
            error();
            }
            else{
				if (nextToken != while_code) {
					error();
					}
					else{
						if (nextToken != left_Parenthesis) {
							error();
							}
							else{
								lex();
								expression();
								if (nextToken != right_Parenthesis) {
									error();
									}
								}
						}
				}
			}
		}
}
//<block_stmt> -> block '{' <statement> '}'
void block_stmt(void){
	if (nextToken != do_while_code) {
		error();
    }
	else{
		if (nextToken != left_Bracket){
			error();
		}
		else{
			statement();
			if (nextToken != right_Bracket) {
				error();
            }
		}
	}
}
//<assignment> ->

//<return> -> return "(" <statement> ")"
void return_stmt(void) {
  if (nextToken != return_code) {
    error();
	}
    else{
      if (nextToken != left_Parenthesis) {
        error();
        }
        else{
			statment();
          if (nextToken != right_Parenthesis) {
            error();
		  }
		}
	}
}

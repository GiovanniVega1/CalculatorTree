#pragma once

#include"lexer.h"

namespace Parser {
	/*
		Recursive Descent Parse Tree

		// root of the descent parse tree
		calculator:
			end // end of stream, or eof
			expr_list end
		
		expr_list:
			expr ';' // print symbol ';'
			expr_list expr ';' //left recursion

		expr:
			term
			expr '+' term
			expr '-' term

		term:
			prim
			term '*' prim
			term '/' prim

		prim:
			number
			variable
			variable '=' expr
			'-' prim
			'(' expr ')'
	*/

	class ClassParser {
		public:
			//handle addition and substraction
			double expr(bool bNextToken);
			//handle multiplication and division
			double term(bool bNextToken);
			//extract number frome the stream token
			//assign expression to a variable
			//handle unary minus '-'
			//handle paranthesis '(' expr ')'
			double prim(bool bNextToken);
	};
}

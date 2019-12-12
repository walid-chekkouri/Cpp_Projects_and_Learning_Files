#include<iostream>

int main(){
	int a;
	int b = 8;
	a = (b = 3, b + 2); //a = (operationA,operatioB) means: after operationA is done, assign the value of operationB to a

	

	std::cout << a << std::endl;
	int var = (std::cout << "Hello!\n", 8);
	std::cout << var << std::endl;

	int x;
	x = (1, 5, 3);//returns the rightmost operand.

	std::cout << x << std::endl;
	x = 7, 4, 50;//coma has the least precedence. so the assignment operator is of higher precedence.//returns 7.
	std::cout << x << std::endl;

	/* TO KNOW:
	
-------------------------------------------------------------------
 *  Commas act as separators in this line, not as an operator.
 *  Results: a=1, b=2, c=3, i=0

	int a = 1, b = 2, c = 3, i = 0;

	
	*  Assigns value of b into i.
	*  Results: a=1, b=2, c=3, i=2
	
	int a = 1, b = 2, c = 3;
	int i = (a, b);


	*  Assigns value of a into i. Equivalent to (i = a), b;
	*  Results: a=1, b=2, c=3, i=1
	*  (The curly braces on the second line are needed to
	*   avoid a compiler error.  The second 'b' declared
	*   is given no initial value.)
	
	int a = 1, b = 2, c = 3;
	{ int i = a, b; }

	
	*  Increases value of a by 2, then assigns value of resulting operation a+b into i .
	*  Results: a=3, b=2, c=3, i=5

	int a = 1, b = 2, c = 3;
	int i = (a += 2, a + b);

	
	*  Increases value of a by 2, then stores value of a to i, and discards unused
	*  values of resulting operation a + b . Equivalent to (i = (a += 2)), a + b;
	*  Results: a=3, b=2, c=3, i=3
	
	int a = 1, b = 2, c = 3;
	int i;
	i = a += 2, a + b;

	
	*  Assigns value of a into i;  the following 'b' and 'c'
	*  are not part of the initializer but declarators for
	*  second instances of those variables.
	*  Results: a=1, b=2, c=3, i=1
	*  (The curly braces on the second line are needed to
	*   avoid a compiler error.  The second 'b' and second
	*   'c' declared are given no initial value.)
	
	int a = 1, b = 2, c = 3;
	{ int i = a, b, c; }

	
	*  Assigns value of c into i, discarding the unused a and b values.
	*  Results: a=1, b=2, c=3, i=3
	
	int a = 1, b = 2, c = 3;
	int i = (a, b, c);

	
	*  Returns 6, not 4, since comma operator sequence points following the keyword
	*  'return' are considered a single expression evaluating to rvalue of final
	*  subexpression c=6 .
	
	return a = 4, b = 5, c = 6;

	
	*  Returns 3, not 1, for same reason as previous example.

	return 1, 2, 3;

	
	*  Returns 3, not 1, still for same reason as above. This example works as it does
	*  because return is a keyword, not a function call. Even though compilers will
	*  allow for the construct return(value), the parentheses are only relative to "value"
	*  and have no special effect on the return keyword.
	*  Return simply gets an expression and here the expression is "(1), 2, 3".
	
	return(1), 2, 3;

-------------------------------------------------------------------
	*/

	system("pause");

	return 0;
}
// #include<iostream>
// #include "stack.h"
// #include<string>
// using namespace std;
// /*int main()
// {
// 	Stack s;
	
	
	
// 	int item;
	
// 	for (int i = 0; i < 20; i++)
// 	{
// 		s.Push(i);
// 	}
// 	s.Peek(item);
	
	
	
// 	for (int i = 0; i < 20; i++)
// 	{
// 		s.Pop(item);
// 		cout << item << endl;
// 	} 
	
	
	
	
	
// 	return 0;
// 	}
// 	*/
// int main() {
// 	Stack s;
// 	string input;
// 	cout << "Enter a string to reverse: ";
// 	cin >> input;

	
// 		s.Reverse(input);

	

// 	return 0;
// }

/*#include<iostream>
#include<string>
#include "stack.h"

using namespace std;
int main()
{
	Stack<int> IntStack;
	Stack<float> floatStack;
	int data;
	float val;
	IntStack.Push(35);
	floatStack.Push(3.1415927);
	IntStack.Pop(data);
	cout << data << endl;
	floatStack.Pop(val);
	cout << val << endl;

}
#include "stack.cpp"

#include <iostream>
#include <string>
#include "stack.h"

using namespace std;

int main() {
    string expression;
    
    
    cout << "Enter a parenthesized expression to check validity: ";
    getline(cin, expression);
    if (isValidParentheses(expression))
        cout << "The expression is valid."<<endl;
    else
        cout << "The expression is NOT valid."<<endl;

    
    cout << "Enter infix expression: ";
    getline(cin, expression);
    string postfix = infixToPostfix(expression);
    cout << "Postfix expression: " << postfix << endl;

    
    cout << "Enter postfix expression to evaluate: "<<endl;
    getline(cin, expression);
    int result = evaluatePostfix(expression);
    cout << "Result: " << result << endl;

    return 0;
}
*/


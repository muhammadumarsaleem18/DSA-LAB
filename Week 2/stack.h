
// #pragma once
// #include<iostream>
// #include<string>
// using namespace std;


// #define MAX_ITEMS 100



// class Stack {
// public:
//     Stack();
//     bool IsEmpty() const;
//     bool IsFull() const;
//     void Push(char newItem);
//     void Pop(char& item);
//     //void Peek(char& Topitem);
//     void Reverse(string input);


// private:
//     int top;
//     char items[MAX_ITEMS];
// };

/*#pragma once
#include<iostream>
#include<string>
using namespace std;
template<class ItemType>
class Stack
{
public:
	Stack();
	Stack(int max);
	bool IsEmpty()const;
	bool  IsFull()const;
	void Push(ItemType newItem);
	void Pop(ItemType& item);
	
	
private:
	int top;
	int maxStack;
	ItemType* items;



};

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
	char* arr;
	int topIndex;
	int maxSize;

public:
	Stack();
	Stack(int size);
	~Stack();

	bool IsEmpty() const;
	bool IsFull() const;
	void Push(char ch);
	char Pop();
	char Top() const;
};


bool isValidParentheses(string expr);
int precedence(char op);
string infixToPostfix(string infix);
int evaluatePostfix(string postfix);
*/


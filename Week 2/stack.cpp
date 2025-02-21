// // stack.cpp
// #include<iostream>
// #include "stack.h"
// #include<string>
// using namespace std;



// Stack::Stack() : top(-1) {}


// bool Stack::IsEmpty() const {
//     return top == -1;
// }


// bool Stack::IsFull() const {
//     return top == MAX_ITEMS - 1;
// }


// void Stack::Push(char newItem) {
//     if (IsFull()) {
//         throw "Stack Overflow"; 
//     }
//     items[++top] = newItem;
// }


// void Stack::Pop(char& item) {
//     if (IsEmpty()) {
//         throw "Stack Underflow"; 
//     }
//     item = items[top--];
// }
// /*void Stack::Peek(char& Topitem)
// {
//     Topitem = items[top];
//     cout << "top is" << Topitem << endl;
    

// }*/
// void Stack::Reverse(string input) 
// {
//     string reversed = "";

//     for (char ch : input) 
//     { 
        
//             Push(ch);
        
       
//     }

//     char c;
//     while (!IsEmpty()) {
        
//             Pop(c);
//             reversed += c;
       
//     }

//     cout << reversed << endl;
// }
/*#include<iostream>
#include "stack.h"
#include<string>
#include<stdlib.h>

template<class ItemType>
Stack<ItemType>::Stack()
{
	maxStack = 500;
	top = -1;
	items = new ItemType[500];
}
template<class ItemType>
Stack<ItemType>::Stack(int max)
{
	maxStack = max;
	top = -1;
	items = new ItemType[max];
}
template<class ItemType>
bool Stack<ItemType>::IsEmpty()const
{
	return top == -1;
}
template<class ItemType>
bool Stack<ItemType>::IsFull()const
{
	return (top == maxStack-1);
}
template<class ItemType>
void Stack<ItemType>::Push(ItemType newItem)
{
	if (IsFull())
	{
		cout << "Stack Overflow!" << endl;
		exit(1);
	}
	top++;
	items[top] = newItem;
}
template<class ItemType>
void Stack<ItemType>::Pop(ItemType& item)
{
	if (IsEmpty())
	{
		cout << "Stack Underflow!" << endl;
		exit(1);
	}
	item = items[top];
	top--;
	}
	*/
/*#include "stack.h"

    // Stack class methods
Stack::Stack() {
    maxSize = 100;
    arr = new char[maxSize];
    topIndex = -1;
}

Stack::Stack(int size) {
    maxSize = size;
    arr = new char[maxSize];
    topIndex = -1;
}

Stack::~Stack() {
    delete[] arr;
}

bool Stack::IsEmpty() const {
    return topIndex == -1;
}

bool Stack::IsFull() const {
    return topIndex == maxSize - 1;
}

void Stack::Push(char ch) {
    if (!IsFull()) {
        arr[++topIndex] = ch;
    }
    else {
        cout << "Stack Overflow!" << endl;
    }
}

char Stack::Pop() {
    if (!IsEmpty()) {
        return arr[topIndex--];
    }
    cout << "Stack Underflow!" << endl;
    return '\0';
}

char Stack::Top() const {
    return IsEmpty() ? '\0' : arr[topIndex];
}

// Function to check if parentheses are balanced
bool isValidParentheses(string expr) {
    Stack s(expr.length());

    for (char c : expr) {
        if (c == '(' || c == '{' || c == '[') {
            s.Push(c);
        }
        else if (c == ')' || c == '}' || c == ']') {
            if (s.IsEmpty()) return false;
            char top = s.Pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.IsEmpty();
}

// Function to determine operator precedence
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Function to convert infix to postfix
string infixToPostfix(string infix) {
    Stack s(infix.length());
    string postfix = "";

    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        }
        else if (c == '(') {
            s.Push(c);
        }
        else if (c == ')') {
            while (!s.IsEmpty() && s.Top() != '(')
                postfix += s.Pop();
            s.Pop();
        }
        else {
            while (!s.IsEmpty() && precedence(s.Top()) >= precedence(c)) {
                postfix += s.Pop();
            }
            s.Push(c);
        }
    }

    while (!s.IsEmpty()) {
        postfix += s.Pop();
    }
    return postfix;
}

// Function to evaluate a postfix expression
int evaluatePostfix(string postfix) {
    Stack s(postfix.length());

    for (char c : postfix) {
        if (isdigit(c)) {
            s.Push(c - '0');
        }
        else {
            int val2 = s.Pop();
            int val1 = s.Pop();
            switch (c) {
            case '+': s.Push(val1 + val2); break;
            case '-': s.Push(val1 - val2); break;
            case '*': s.Push(val1 * val2); break;
            case '/': s.Push(val1 / val2); break;
            }
        }
    }
    return s.Pop();
}
*/
	








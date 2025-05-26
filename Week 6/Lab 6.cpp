#include<iostream>
#include"Exercise 1.h"
int main()
{
	List<int> L;
	L.push(87);
	L.push(56);
	L.push(78);
	L.push(30);
	L.push(20);

	L.insertafter(56,5);

	L.deleteItem(30);

	cout << L.pop() << endl;
	cout << L.pop() << endl;
	cout << L.pop() << endl;
	cout << L.pop() << endl;
	cout << L.pop() << endl;
	//getch();


	string str = "HELLO";
	List<char> charList;

	
	for (int i = 0; i < str.length(); i++) {
		charList.push(str[i]);
	}

	
	while (!charList.emptyList()) {
		cout << charList.pop();
	}
	cout << endl;

	return 0;
}
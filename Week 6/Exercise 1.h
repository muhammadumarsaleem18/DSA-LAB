#pragma once
#include <iostream>
#include <cstdlib> 
#include <conio.h>
using namespace std;

template<class ItemType>
class List
{
protected:
    struct node {
        ItemType info;
        struct node* next;
    };
    typedef struct node* NODEPTR;
    NODEPTR listptr;
public:
    List();
    ~List();
    bool emptyList();
    void insertafter(ItemType oldvalue, ItemType newvalue);
    void deleteItem(ItemType oldvalue);
    void push(ItemType newvalue);
    ItemType pop();
};

template<class ItemType>
List<ItemType>::List() {
    listptr = nullptr;
}

template<class ItemType>
List<ItemType>::~List()
{
    NODEPTR p, q;
    if (emptyList()) {
        return;
    }
    for (p = listptr; p != nullptr; p = q) {
        q = p->next;
        delete p;
    }
}

template <class ItemType>
void List<ItemType>::insertafter(ItemType oldvalue, ItemType newvalue)
{
    NODEPTR p, q;
    for (p = listptr; p != nullptr && p->info != oldvalue; p = p->next);

    if (p == nullptr) {
        cout << "ERROR: value sought is not in the list.";
        exit(1);
    }

    q = new node;
    q->info = newvalue;
    q->next = p->next;
    p->next = q;
}

template<class ItemType>
bool List<ItemType>::emptyList()
{
    return (listptr == nullptr);
}

template<class ItemType>
void List<ItemType>::push(ItemType newvalue)
{
    NODEPTR p = new node;
    p->info = newvalue;
    p->next = listptr;
    listptr = p;
}

template<class ItemType>
void List<ItemType>::deleteItem(ItemType oldvalue)
{
    NODEPTR p, q;
    for (q = nullptr, p = listptr; p != nullptr && p->info != oldvalue; q = p, p = p->next);

    if (p == nullptr) {
        cout << "ERROR: value sought is not in the List.";
        exit(1);
    }

    if (q == nullptr) {
        listptr = p->next;
    }
    else {
        q->next = p->next;
    }
    delete p;
}

template<class ItemType>
ItemType List<ItemType>::pop()
{
    if (emptyList()) {
        cout << "ERROR: the List is empty.";
        exit(1);
    }

    NODEPTR p = listptr;
    ItemType x = p->info;
    listptr = p->next;
    delete p;

    return x;
}





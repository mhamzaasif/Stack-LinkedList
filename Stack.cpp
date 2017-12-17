#include "Stack.h"
#include <iostream>
using namespace std;



Stack::Stack()
{
	head = nullptr;
//	head->ptr = nullptr;
	tail = nullptr;
//	tail->ptr = nullptr;
}

void Stack::push(int data){
	node temp=new stack;
	temp->data = data;
	temp->ptr = nullptr;
	if (tail == nullptr)
	{
		head = temp;
		tail = head;
	}
	else
	{
		temp->ptr = head;
		head = temp;
	}
}

int Stack::pop(){
	int data;
	node temp = head;
	head = head->ptr;
	data = temp->data;
	if (temp != nullptr)
		delete temp;

	return data;
}

bool Stack::is_empty(){
	if (head == nullptr)
		return 1;
	else
		return 0;
}

void Stack::list(){
	temp = head;
	while (temp->ptr != nullptr)
	{
		cout << temp->data << endl;
		temp = temp->ptr;
	}
	cout << temp->data << endl;
}
Stack::~Stack()
{
}

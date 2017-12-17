#pragma once
class Stack
{
	typedef struct stack{
		int data;
		stack *ptr;
	}*node;
	node head;
	node tail;
	node temp;
public:
	Stack();
	void push(int);
	int pop();
	bool is_empty();
	void list();
	~Stack();
};


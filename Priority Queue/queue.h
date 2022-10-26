#pragma once
#include"node.h"
class Queue
{
	Node* front;
	int val;
public:

	Queue()
	{
		front = nullptr;
		val = 0;
	}
	void enqueue();
	void dequeue();
	int tos();
	int isEmpty();
	void display();
	int find();
	void size();
	void exit();

	~Queue() {

	}
};

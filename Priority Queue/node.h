#pragma once
class Node
{
	int obj;
	int priority;
	Node* next;

public:
	Node()
	{
		obj = 0;
		priority = 0;
		next = nullptr;

	}

	void set(int obj)
	{
		this->obj = obj;
	}

	int get()
	{
		return obj;
	}

	void setpriority(int priority)
	{
		this->priority = priority;
	}

	int getpriority()
	{
		return priority;
	}

	void setnext(Node* next)
	{
		this->next = next;
	}

	Node* getnext()
	{
		return next;
	}

	~Node()
	{

	}
};

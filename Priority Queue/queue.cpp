#include"queue.h"
#include<iostream>
using namespace std;

void Queue::dequeue()
{
	if (!isEmpty())
	{
		int x = front->get();
		Node* t = front;
		front = front->getnext();
		delete t;
		cout << "\n Value Deleted  " << x << endl;
		val--;
	}
	else
		cout << "\n\t No Value to Dequeue Please Enter a Value First! " << endl;

}

int Queue::tos()
{
	if (!isEmpty())
	{
		cout << "\n Top Of Stack -> " << front->get() << endl;
		return front->get();
	}
	else
		cout << "\n\t Enter a value first!" << endl;

}

int Queue::isEmpty()
{
	return (front == nullptr);
}

int Queue::find()
{
	if (!isEmpty())
	{
		int num;
		int flag = 0;
		cout << "\n What Value Do You Want To Find ";
		cin >> num;

		Node* temp = front;

		while (temp != nullptr)
		{
			if (num == temp->get())
			{
				flag = 1;
				break;
			}
			temp = temp->getnext();
		}
		if (flag == 1)
		{
			cout << "\n\t Value Found " << endl;
			return flag;
		}
		else
		{
			cout << "\n\t Value Not In Queue" << endl;
			return flag;
		}

	}
	else
		cout << "\n\t Please enter a value in Queue first to use find operation " << endl;

}



void Queue::display()
{
	if (!isEmpty())
	{
		Node* Temp = new Node();
		Temp = front;
		cout << "\nValues  <-->	Priority\n";
		while (Temp != nullptr)
		{
			cout << Temp->get() << "\t\t" << Temp->getpriority();
			Temp = Temp->getnext();
			cout << endl;
		}
		cout << endl << endl;
	}
	else
		cout << "\n\tQueue mein kuch daal lein " << endl;

}



void Queue::enqueue()
{
	int num, priority;

	Node* newnode = new Node(); //creates new node

	cout << "\nEnter Value--> ";
	cin >> num;
	//Asks for num and its priority
	cout << "\nEnter Values Priority--> ";
	cin >> priority;

	newnode->set(num);			//sets number in node
	newnode->setpriority(priority);

	if (front == nullptr)
	{
		front = newnode;
	}
	else if (newnode->getpriority() < front->getpriority())

	{
		newnode->setnext(front);

		front = newnode;
	}

	else {
		Node* temp = front;
		while (temp->getnext() != nullptr && newnode->getpriority() >= temp->getnext()->getpriority())
		{
			temp = temp->getnext();
		}
		newnode->setnext(temp->getnext());
		temp->setnext(newnode);
	}
	val++;
	}



	void Queue::size()
	{
		if (!isEmpty())
		{
			cout << "\n\t The Size Of the Queue Is --> " << val << endl;
		}
		else
			cout << "\n\t Size cant not be displayed as queue is empty!" << endl;
	}

	void Queue::exit()
	{
		cout << "\t\t\t BUH BYE " << endl;
	}
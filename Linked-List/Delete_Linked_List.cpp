# Deleting linked list in c++

#include<iostream>
using namespace std;

# create stucture
struct Node
{
	int data;
	Node *link;
};


# create linked list class
class LinkedList
{
  # private variables
	private :
	Node *head;
	Node *pointer;
	Node *ptr, *prev;
	int count;
	int mid;
	
  # public variables
	public:
	LinkedList()
	{
		count = 0;
		head = NULL;
		mid = 0;
	}
	
  # insertion at begining function
	void insert_Beg(int element)
	{
		Node *newNode = new Node;
		newNode -> data = element;
		newNode -> link = head;
		head = newNode;
		count++;
	}
	
	# deletion from end function
	void delete_End()
	{
//		Node *head =NULL;
		if(head == NULL)
		{
			cout<<"LINKED LIST IS EMPTY ";
		}
		else 
		{
		
		    if(head -> link == NULL)
		{
		
	     	 ptr = head;
		     head = NULL;
	         delete ptr;
		     count--;
     	}
	      else
	   {
	    	ptr = head;
		   while(ptr -> link !=NULL)
		{
			prev = ptr;
			ptr = ptr -> link;
		}
		    prev -> link = NULL;
		    delete ptr;
	     	count--;
	    }
     }
   }
  
  
  # deletion from begining function
	void delete_Beg()
	{
		if(head == NULL)
		{
			cout<<"LINKED LIST IS EMPTY ";
		}
		else{
		
		ptr = head;
		head = head -> link;
		delete ptr;
		count--;
	}
}
  
  
  
  # deletion from mid function
	void delete_Mid()
	{
		int mid = count/2;
		int c = 0;
		if(head == NULL)
		{
			cout<<"LINKED LIST IS EMPTY ";
		}
		else
		{
			
		 
		if(head -> link == NULL)
		{
		
		ptr = head;
		head = NULL;
		delete ptr;
		count--;
	}
	else{
		ptr = head;
		while(c != mid)
		{
			c++;
			prev = ptr;
			ptr = ptr -> link;
		}
		prev -> link = ptr -> link;
		delete ptr;
		count--;
	}
}
}
  
  # function to dispaly linked list
	void display()
	{
		pointer = head;
		while(pointer != NULL)
		{
			cout<<pointer -> data<<" ";
		pointer = pointer -> link;
		}
		 cout<<"\n";
	}
};


# main function where we create objects.
int main()
{
	LinkedList linkedlist;
	
	linkedlist.insert_Beg(1);
	linkedlist.insert_Beg(2);
	linkedlist.insert_Beg(3);
	linkedlist.insert_Beg(4);
	linkedlist.insert_Beg(5);
	linkedlist.insert_Beg(5);
	linkedlist.delete_Beg();
	linkedlist.delete_End();
	linkedlist.delete_Mid();
	linkedlist.display();
}


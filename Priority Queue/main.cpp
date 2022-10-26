#include"queue.h"
#include<iostream>
using namespace std;

int main()
{
	Queue q;
	int opt;

	do {
		cout << "----------------Menu------------------" << endl;
		cout << "Please chose an option" << endl;
		cout << "1. Enqueue " << endl;
		cout << "2. Dequeue " << endl;
		cout << "3. Front " << endl;
		cout << "4. Isempty " << endl;
		cout << "5. Find " << endl;
		cout << "6. Size " << endl;
		cout << "7. Display " << endl;
		cout << "8. Exit " << endl;

		cin >> opt;

		switch (opt)
		{
		case 1:
			q.enqueue();
			break;
		case 2:
			q.dequeue();
			break;
		case 3:
			q.tos();
			break;
		case 4:
			if (q.isEmpty())
			{
				cout << "\n\tQueue is empty " << endl;
			}
			else
				cout << "\n\tQueue is not empty " << endl;
			break;
		case 5:
			q.find();
			break;
		case 6:
			q.size();
			break;
		case 7:
			q.display();
			break;
		}
	} while (opt != 8);

}

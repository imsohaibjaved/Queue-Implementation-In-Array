#include<iostream>
using namespace std;
int arr[5] = { -1,-1,-1,-1,-1 };
int variable;
void enQueue();
void deQueue();
bool isEmpty();
bool isFull();
void display();
int main()
{
	int choice = 0, check = 0;
	cout << "Queue Implementation using Arrays\n" << endl;
	cout << "Note: The maximum size of Queue is 5 and (-1) means Queue element is empty\n" << endl;
	while (check != 100)
	{
		cout << "\n 1. Add Element ( enQueue )\n 2. Remove Element ( deQueue )\n 3. Display Queue\n" << endl;
		cout << "Enter Choice :";
		cin >> choice;
		switch (choice)
		{
		case 1:
			enQueue();
			break;
		case 2:
			deQueue();
			break;
		case 3:
			display();
			break;
		case 4:
			check = 100;
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}
void enQueue()
{
	if (isFull())
	{
		cout << "\nQueue is full !!\n" << endl;
	}
	else
	{
		int size = 5;
		cout << "\nEnter Positive Integer : ";
		cin >> variable;

		for (int i = 0; i < size; i++)
		{
			if (arr[i] == -1)
			{
				arr[i] = variable;
				arr[i - 1] = -1;
			}
		}
	}
}
void deQueue()
{
	if (isEmpty())
	{
		cout << "\nQueue is Empty\n" << endl;
	}
	else
	{
		for (int i = 4; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = -1;
	}
}
bool isEmpty()
{
	int check = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == -1)
		{
			check++;
		}
	}
	if (check == 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isFull()
{
	int check = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] != -1)
		{
			check++;
		}
	}
	if (check == 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void display()
{
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << "\n\n";
}
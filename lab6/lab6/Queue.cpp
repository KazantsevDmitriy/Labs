#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "Header.h"
using namespace std;
Queue::Queue(int count)
{
	Node *lst;
	lst = (struct Node*)malloc(sizeof(struct Node));
	lst->x = count;
	lst->Next = lst; // указатель на следующий узел
	lst->Prev = lst; // указатель на предыдущий узел
}
Queue::~Queue()
{
	Node *temp = Head;
	while (temp != NULL)
	{
		temp = Head->Next;
		delete Head;
		Head = temp;
	}
}
void Queue::Push(int x)
{
	Node *temp = new Node;
	temp->x = x;
	temp->Next = NULL;
	if (Head != NULL)
	{
		temp->Prev = Tail;
		Tail->Next = temp;
		Tail = temp;
	}
	else
	{
		temp->Prev = NULL;
		Head = Tail = temp;
	}
}

int Queue::Peek()
{
	Node *temp = Head;
	return temp->x;
}

void Queue::Pop()
{
	if (Head != NULL)
	{
		Node *temp = Head;
		Head = Head->Next;
		delete temp;
	}
}


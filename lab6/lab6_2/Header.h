#pragma once
#include <iostream>
using namespace std;
struct Node
{
public:
	int x;
	Node *Next, *Prev;
};
template <typename T>
class Queue
{
	Node *Head, *Tail;
public:
	Queue(T count)
	{
		Node *lst;
		lst = (struct Node*)malloc(sizeof(struct Node));
		lst->x = count;
		lst->Next = lst; // указатель на следующий узел
		lst->Prev = lst; // указатель на предыдущий узел
	}
	~Queue()
	{
		Node *temp = Head;
		while (temp != NULL)
		{
			temp = Head->Next;
			delete Head;
			Head = temp;
		}
	}
	void Push(T x)
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

	T Peek()
	{
		Node *temp = Head;
		return temp->x;
	}

	void Pop()
	{
		if (Head != NULL)
		{
			Node *temp = Head;
			Head = Head->Next;
			delete temp;
		}
	}
};

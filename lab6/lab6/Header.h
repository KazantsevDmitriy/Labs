#pragma once
#include <iostream>
#include "list.h"
using namespace std;
class Queue
{
	Node *Head, *Tail;
public:
	Queue(int count);
	~Queue();
	void Push(int element);
	void Pop();
	int Peek();
	Queue() :Head(NULL), Tail(NULL) {};
};
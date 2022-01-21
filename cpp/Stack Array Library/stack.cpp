#include <stdio.h>
#include <iostream>
#include <math.h>
#include "stack.h"
using namespace std;

Stack::Stack() {}

Stack::~Stack() {
	// delete data;
}

void Stack::push(void* inData) {
	if(size==n)
		return;
	else {
		size++;
		stack[size-1]=inData;
	}
}

void* Stack::pop() {
	void* popped = stack[size-1];
	if(empty())
		return NULL;
	else {
		size--;
		return popped;
	}
}

void* Stack::top() {
	if(empty())
		return NULL;
	else
		return stack[size-1];
}

bool Stack::empty() {
	return size==0;
}

void Stack::display() {
	if(!empty())
		for(int i=size; i--; i>-1)
			cout << stack[i]->toString()<<"\t";	//cast when necessary
	cout << endl;
}
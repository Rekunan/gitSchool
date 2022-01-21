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
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode->data = inData;
	newNode->pNext = pTop;
	pTop = newNode;
}

void* Stack::pop() {
	if(pTop==NULL)
		return NULL;
	else {
		void* topData = pTop->data;
		pTop = pTop->pNext;
		return topData;
	}
}

void* Stack::top() {
	if(pTop==NULL)
		return NULL;
	else
		return pTop->data;
}

bool Stack::empty() {
	return pTop==NULL;
}

void Stack::display() {
	Node *p1;
	p1 = pTop;
	while (p1 != NULL) {
		cout << (p1->data)->toString()<<"\t";	//cast when necessary
		p1 = p1->pNext;
	}
	cout<<endl;
}
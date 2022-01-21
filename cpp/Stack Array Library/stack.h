#ifndef _Stack_H_
#define _Stack_H_

class Stack {
	void* stack[100];
	int n=100, size=0;

	public:
		Stack();					// Construct stack
		~Stack();
		void push(void* inData);	// Add element to top of stack
		void* pop();				// Return element at top of stack and remove from top
		void* top();				// Return element at top of stack
		bool empty();
		void display();
};

#endif 		//_Stack_H_
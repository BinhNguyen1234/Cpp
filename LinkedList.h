#pragma once
#include <iostream>
#ifndef LINKED_LIST_H // ifndef refer to short hand of "if nOT defINE"
#define LINKED_LIST_H

struct Node {
	int Data;
	Node* next = nullptr;
	Node(int Data) {
		this->Data = Data;
	};
};

class LinkeddList {
	int data;
	Node* next = nullptr;
	public:
	LinkeddList(int data) {
		this->data = data;
	};
};
#endif
// Struct should be defined in Header file

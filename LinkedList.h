#pragma once
#include <iostream>
#ifndef LINKED_LIST_H // ifndef refer to short hand of If not define
#define LINKED_LIST_H

struct Node {
	int Data;
	Node* next = nullptr;
	Node(int Data) {
		this->Data = Data;
	};
};

#endif
// Struct should be defined in Header file

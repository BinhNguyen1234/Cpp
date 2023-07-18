#pragma once
#include <iostream>
#ifndef LINKED_LIST_H // ifndef refer to short hand of "if nOT defINE"
#define LINKED_LIST_H
#include <ios>
namespace BinhDSA {
struct Node {
	int data;
	Node* next = nullptr;
	Node(int data) {
		this->data = data;
	};
};

class LinkedList {
	public:
		Node* head = nullptr;
		LinkedList(int data) {
			this->head = new Node(data);
		};
		void PrintHeadValue() {
			std::cout << this->head;
		};
		void InsertAtFirst(Node* node);
};
}
#endif
// Struct should be defined in Header file

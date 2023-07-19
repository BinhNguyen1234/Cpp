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
		Node* curNode = nullptr;
		Node* head = nullptr;
		Node* tail = nullptr;
		LinkedList(int data) {
			this->curNode = new Node(data);
			this->head = curNode;
		};
		void AddNode(Node*);
		void PrintHeadValue() {
			std::cout << this->head;
		};
		void PrintAllValue();
		Node* findValue(int);
		void PushValue(int);
		void PushValue(Node*);
		void InsertAtFirst(Node* node);
		int Count();
		void DeleteValue(int);
		void DeleteValue(Node*);
		bool IsExist(int);
		bool IsExist(Node*);
		static int CountNode(LinkedList*);

};
}
#endif
// Struct should be defined in Header file

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
struct BeforeAfterNode {
	Node* BeforeAfter[2];
};
class LinkedList {
	public:
		Node* curNode = nullptr;
		Node* head = nullptr;
		LinkedList(int data) {
			this->curNode = new Node(data);
			this->head = curNode;
		};
		void AddHead(Node*);
		void AddHead(int);
		void PrintHeadValue() {
			std::cout << this->head;
		};
		void PrintAllValue();
		Node* findValue(int);
		void PushValue(int);
		void PushValue(Node*);
		void InsertAtFirst(Node* node);
		int Count();
		void DeleteFirstValue(int);
		void DeleteNode(Node*);
		bool IsExist(int);
		bool IsExist(Node*);
		void Reverse();
		static int CountNode(LinkedList*);
		Node** GetBeforeAndAfterNode(Node*);
		Node** GetBeforeAndAfterValue(int);

};
}
#endif
// Struct should be defined in Header file

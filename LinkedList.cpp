#include "LinkedList.h"
#include <ios>
using namespace BinhDSA;
//void LinkedList::PrintHeadValue() {
//	std::cout << LinkedList::head->data;
//}
void LinkedList::InsertAtFirst(Node* node) {
	node->next = this->head;
	this->head = node;
};
void LinkedList::AddNode(Node* node) {

}
Node* LinkedList::findValue(int value) {
	Node* current = this->head;
	while (current!= nullptr) {
		if (current->data == value) {
			return current;
		}
		current = current->next;
	}
	return nullptr;
}
void LinkedList::PushValue(int value) {
	Node* node = new Node(value);
	this->curNode->next = node;
	this->curNode = node;
}
void LinkedList::PushValue(Node* node) {
	this->curNode->next = node;
	this->curNode = node;
};
void LinkedList::PrintAllValue() {
	Node* current = this->head;
	while (current != nullptr) {
		std::cout << current->data << std::endl;
		current = current->next;
	}
}
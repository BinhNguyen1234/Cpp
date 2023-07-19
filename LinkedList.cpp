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
int LinkedList::CountNode(LinkedList* LinkedList) {
	if (LinkedList->head == nullptr) {
		return 0;
	}
	int count = 0;
	Node* curNode = LinkedList->head;
	while (curNode != nullptr) {
		count++;
		curNode = curNode->next;
	}
	return count;
}
int LinkedList::Count() {
	if (this->head == nullptr) {
		return 0;
	}
	Node* curNode = this->head;
	int count = 0;
	while (curNode != nullptr) {
		count++;
		curNode = curNode->next;
	}
	return count;
}
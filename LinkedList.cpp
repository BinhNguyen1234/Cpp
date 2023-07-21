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
bool LinkedList::IsExist(int value) {
	if (this->findValue(value) != nullptr) {
		return true;
	}
	
	return false;
}
bool LinkedList::IsExist(Node* value) {
	if (this->head == nullptr) {
		return false;
	}
	Node* node = this->head;
	while (node!= nullptr) {
		if (value == node) {
			return true;
		}
		node = node->next; 
	}
	return false;
}
void LinkedList::DeleteFirstValue(int value) {
	Node** BeforeAfter = this->GetBeforeAndAfterValue(value);
	BeforeAfter[0]->next = BeforeAfter[1];
}
Node** LinkedList::GetBeforeAndAfterNode(Node* node) {
	Node* beforeAfter[2];
	Node* curNode = this->head;
	while (curNode != nullptr && curNode->next != nullptr) {
		if (curNode->next == node) {
			Node* afterNode = curNode->next->next;
			beforeAfter[0] = curNode;
			beforeAfter[1] = afterNode;
			return beforeAfter;
		}
		curNode = curNode->next;
	}
	return beforeAfter;
}
Node** LinkedList::GetBeforeAndAfterValue(int value) {
	Node* beforeAfter[2];
	Node* curNode = this->head;
	while (curNode != nullptr && curNode->next != nullptr) {
		if (curNode->next->data == value) {
			Node* afterNode = curNode->next->next;
			beforeAfter[0] = curNode;
			beforeAfter[1] = afterNode;
			return beforeAfter;
		}
		curNode = curNode->next;
	}
	return beforeAfter;
}
void LinkedList::DeleteNode(Node* node) {
	Node** beforeAfter = this->GetBeforeAndAfterNode(node);
	beforeAfter[0]->next = beforeAfter[1];
}
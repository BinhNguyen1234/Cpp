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
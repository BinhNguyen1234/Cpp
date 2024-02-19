#include "Tree.h"
#include <list>
#include <iostream>
using namespace std;
using namespace BinhTreeNode;
void TreeNode::InsertData(TreeNode* a, TreeNode* location) {
	if (a->data < location->data) {
		if (location->left == nullptr) {
			location->left = a;
		}
		else {
			InsertData(a, location->left);
		}
	}
	else {
		if (location->right == nullptr) {
			location->right = a;
		}
		else {
			InsertData(a, location->right);
		}
	}
}
void TreeNode::InsertData(int a) {
	TreeNode* newTreeNode = new TreeNode(a);
	InsertData(newTreeNode, this);
}

void TreeNode::InsertDatas(list<int> a)
{
	for(int i:a){
		this->InsertData(i);
	}
}
int TreeNode::GetHeight(TreeNode* node)
{

	if (node == nullptr) {
		return -1;
	}
	int left = 0;
	int right = 0;
		left = GetHeight(node->left) + 1;


		right = GetHeight(node->right) + 1;

	return max(GetHeight(node->left), GetHeight(node->right)) + 1;
}
int TreeNode::GetHeight() {
	return GetHeight(this);
}
void TreeNode::TopOfView(TreeNode* root) {
	TreeNode* temp = root;

	while (temp != nullptr) {

		cout << temp->data;
		if (temp->left != nullptr) {
			temp = temp->left;
			continue;
		}
		if (temp->right != nullptr) {
			temp = temp->right;
			continue;
		}
	}

}
void TreeNode::TopOfView() {
	this->TopOfView(this);
}
 
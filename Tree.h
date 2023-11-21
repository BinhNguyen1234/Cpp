#include <list>;
#ifndef TREE_NODE // ifndef refer to short hand of "if nOT defINE"
#define TREE_NODE
using namespace std;
namespace BinhTreeNode {
	struct TreeNode {
		int data;
		TreeNode* right = nullptr;
		TreeNode* left = nullptr;
		TreeNode(int data) {
			this->data = data;
		}
		TreeNode(list<int> datas) {
			this->data = datas.front();
			datas.pop_front();
			this->InsertDatas(datas);
		}

	public: 
		void InsertData(TreeNode* a, TreeNode* location);
		void InsertDatas(list<int> a);
		int GetHeight();
	private:
		int GetHeight(TreeNode* node);
		void InsertData(int a);
	};


}
#endif




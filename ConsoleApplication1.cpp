// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "test.h"
#include "Tree.h"
#include <list>
#include <iostream>
using namespace BinhTreeNode;
using namespace std;
struct StructTest {
	public:
		int a = 5;
};
class ClassTest {
	public: 
		int a = 5;
};
int main()
{
    list<int> a = { 3, 5, 2, 1, 4, 6, 7 };
	TreeNode d = TreeNode(a);

	int he = d.GetHeight();
	cout << he;
	int x;
	StructTest testStruct;
	StructTest *testStructNew = new StructTest();
	ClassTest testClass;
	ClassTest* testClassNew = new ClassTest();
	cout << testStruct.a;
	cout << testStructNew->a;
	cout << testClass.a;
	cout << testClassNew->a;
	cin >> x;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

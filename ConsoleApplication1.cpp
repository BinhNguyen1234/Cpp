// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "test.h"
#include "LinkedList.h"
#include <iostream>
using namespace BinhDSA;
int main()
{
    LinkedList* a = new LinkedList(4);
    Node* ten = new Node(10);
    Node* eleven = new Node(11);
    Node* twelve = new Node(12);
    Node* thirdteen = new Node(13);
    Node* fourteen = new Node(14);
    Node* fifteen = new Node(15);
    Node* sixteen = new Node(16);
    a->PushValue(5);
    a->PushValue(6);
    a->PushValue(7);
    a->PushValue(8);
    a->PushValue(9);
    a->PushValue(ten);
    a->PushValue(eleven);
    a->PushValue(twelve);
    a->PushValue(thirdteen);
    a->PushValue(fourteen);
    a->PushValue(fifteen);
    a->PushValue(sixteen);
    a->PrintAllValue();
    bool test = a->IsExist(sixteen);
    std::cout << "test: " << test << std::endl;
    std::cout << "ok";
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

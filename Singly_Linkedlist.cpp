#include <iostream>
#include <string.h>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
};

class LinkedList
{
    Node *START;

    void addNode()
    {
        int nim;
        cout << "\nMasukakan Nomor Mahasiswa: ";
        cin >> nim;

        Node *nodeBaru = new Node;
        nodeBaru->noMhs = nim;

       
};
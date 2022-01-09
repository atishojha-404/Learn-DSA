#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		Node(){
			data =0;
			next =NULL;
		}
		
		Node(int num){
			data = num;
			next = NULL;
		}
};

class LinkedList{
	public:
		Node *head;
		void add(Node *n);
		void display();
};

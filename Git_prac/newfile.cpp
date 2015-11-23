#include <iostream>
#include <string>
using namespace std;

typedef struct node{
	string name;
	struct node* prev;
	struct node* next;
}	Node;

int main(){
	Node* head = new Node;
	
	return 0;
}


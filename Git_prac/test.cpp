#include <iostream>
#include <string>
using namespace std;

typedef struct node{
	int data;
	struct node* next;
} Node;

void printlist(Node* head){
	Node* cur = head;
	while(cur){
		cout << cur-data << " ";
		cur = cur->next;
	}
	cout << endl;
}

int main(){
	cout << " test " << endl;
	cout << " check point " << endl;
	return 0;
}


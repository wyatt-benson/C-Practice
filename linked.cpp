#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

int main(){
	struct Node* head = NULL;
	for(int i=0;i<10;i++){
		struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
		temp->data = i;
		temp->next = head;
		head = temp;
	}
	struct Node* iter;
	iter = head;
	for(int n=0;n<10;n++){
		cout << iter->data << " ";
		iter = iter->next;
	}
}

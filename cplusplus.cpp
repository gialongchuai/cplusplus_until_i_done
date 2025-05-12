#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *next;
};

Node* makeNode(int x) {
	Node *node = new Node;
	node->data = x;
	node->next = NULL;
	return node;
}

void duyet(Node *head) {
	while(head!=NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

void them_dau(Node *&head, int x) { // else : node* them_dau 
	Node *node = makeNode(x);
	node->next = head;
	head = node;
}

int main() {
	Node *node = NULL;
	for(int i = 0; i<5; i++) {
		them_dau(node, i); // else node = them_dau(node,i)
	}
	duyet(node);
	cout << node->data;

	return 0;
}







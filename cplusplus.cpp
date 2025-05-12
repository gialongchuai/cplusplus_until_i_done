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

void them_cuoi(Node *&head, int x) { // trong truong hop khong co tham chieu'
	Node *node = makeNode(x); // phai return head luc head = node va ch
	if(head == NULL) { // khong co dong` nay` loi tai dong` 37
		head = node; // tmp = head = NULL nen truy cap next loi do chua cap phat'
		return;
	}
	Node *tmp = head;
	while(tmp->next!=NULL){
		tmp = tmp->next;
	}

	tmp->next = node;
}

int sz(Node *node) {
	int cnt = 0;
	while(node!=NULL) {
		cnt++;
		node = node->next;
	}
	return cnt;
}

void them_giua(Node *&head, int x, int k) {
	Node *node = makeNode(x);
	if(k < 1 || k > sz(head) + 1) return;
	if(k == 1) {
		them_dau(head, x);
		return;
	}
	Node *tmp = head;
	for(int i = 1; i<=k-1; i++) {
		tmp = tmp->next;
	}
	node->next = tmp->next;
	tmp->next = node;
}

void xoa_dau(Node *&head) {
	if(head == NULL) return;
	Node *tmp = head;
	head = head->next;
	delete tmp;
}

void xoa_giua(Node *&node, int k) {
	if(node == NULL) return;
	if(k< 1 || k > sz(node)) return; 
	if(k==1 && sz(node) == 1) {
		delete node;
		node = NULL;
		return;
	}
	Node *tmp = node;
	for(int i = 1; i < k - 2;i++) {
		tmp = tmp->next;
	}
	Node *x = tmp->next;
	tmp->next = tmp->next->next;
	delete x;
}

void xoa_cuoi(Node *&head) {
	if(head == NULL) return;
	if(head->next == NULL) {
		delete head;
		head = NULL;
		return;
	}
	Node *tmp = head;
	while(tmp->next->next!=NULL) {
		tmp = tmp->next;
	}
	delete tmp->next;
	tmp->next = NULL;
}

int main() {
	Node *node = NULL;
	for(int i = 0; i < 5; i++) {
		them_cuoi(node, i); // else node = them_dau(node,i)
	}
	duyet(node);
//	cout << node->data;
//	them_cuoi(node,7); // cho node = them_cuoi(node,7) neu khong tham chieu'
	cout << endl;
	duyet(node);
	cout << endl;
	them_giua(node,100,2);
	duyet(node);
	cout << endl;
	cout << sz(node) << endl;
	duyet(node);
	
	cout << endl;
	xoa_dau(node);
	duyet(node);
	
	cout << endl;
	xoa_cuoi(node);
	cout << endl;
	duyet(node);
	
	cout << endl;
	Node *node_sacua = makeNode(10);
	duyet(node_sacua);
	xoa_cuoi(node_sacua);
	cout << endl;
	duyet(node_sacua);
	
	cout << endl;
	xoa_giua(node,2);
	duyet(node);
	
	return 0;
}







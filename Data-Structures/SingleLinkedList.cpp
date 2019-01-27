#include<iostream> 
using namespace std; 

struct Node {
	int value;
    Node *next;
};  

struct Node* head;

void InsertNodeAtBegin(int val){
	Node* temp = new Node();
	temp->next = head;
	temp->value = val;
	head  = temp;
}

void InsertNodeAtEnd(int val){
	Node* temp = new Node();
	temp->next = NULL;
	temp->value = val;
	if(head!=NULL){
		Node* end = head;
		while(end->next!=NULL)
			end = end->next;
		end->next = temp;
	} 
	else{
		head = temp;	
	}
	
}

void DeleteNodeAtBegin(){
	Node *temp = head;
	head = temp->next;
	temp->next = NULL;
	delete temp;
}

void DeleteNodeAtEnd(){
	Node *temp = head;
	Node *back = NULL;
	while(temp->next!=NULL){
		back = temp;
		temp = temp->next;
	}
	back->next = NULL;
	delete temp;
	delete back;
}

void InsertNodeAtPosition(int val,int pos){
	Node *newNode = new Node();
	newNode->next = NULL;
	newNode->value = val;
	//inserting at start
	if(pos == 1){
		newNode->next = head;
		head = newNode;
	}
	else {
		Node *temp = head;
		for(int i=1; i<pos-1;i++)
			temp = temp->next;
		newNode->next = temp->next;				
		temp->next = newNode;
	}
}

void PrintNode(){
	cout << "Printing "<<endl;
	Node* temp = head;
	while(temp!=NULL){
		cout << temp->value<<" "<<temp<<" "<<temp->next<<endl;
		temp = temp->next;
	}
	cout<<endl;
}

int main(void) 
{ 
  head = NULL;
  InsertNodeAtPosition(4,1);
  InsertNodeAtPosition(3,1);
  InsertNodeAtPosition(2,1);
  InsertNodeAtPosition(1,1);
  DeleteNodeAtBegin();
  PrintNode();
  return 0; 
} 

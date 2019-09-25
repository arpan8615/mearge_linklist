
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void printList(Node* n)
{
	if(n!=NULL)
	{
		cout << n->data << " ";
		n = n->next;
		printList(n);
	}
	else
		cout<<endl;
}

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	Node* fourth = NULL;
	Node* fifth = NULL;

	Node* head1 = NULL;
	Node* second1 = NULL;
	Node* third1 = NULL;
	Node* fourth1 = NULL;

	Node* head2 = NULL;
	Node* second2 = NULL;

	head = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();
	fifth = new Node();

	head1 = new Node();
	second1 = new Node();
	third1 = new Node();
	fourth1= new Node();

	head2 = new Node();
	second2= new Node();

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = fourth;

	fourth->data = 10;
	fourth->next = fifth;

	fifth->data = 11;
	fifth->next = head2;

	head1->data = 11;
	head1->next = second1;

	second1->data = 12;
	second1->next = third1;

	third1->data = 4;
	third1->next = fourth1;

	fourth1->data = 5;
	fourth1->next = head2;

	head2->data=100;
	head2->next= second2;

	second2->data=101;
	second2->next=NULL;


	//printList(head);
	//printList(head1);
	//printList(head2);
	Node* n=head;
	Node* n1=head1;

	while(n!=head2 && n!=NULL)
		{
			n=n->next;
		}
	cout<<n<<endl;

	while(n1!=head2 && n1!=NULL)
		{
			n1=n1->next;
		}
		cout<<n1<<endl;

		printList(head);

	if(n==n1)
	{
		cout<<"the links have mearged"<<endl;
	}
	else
		cout<<"The links are seperate"<<endl;

	return 0;
}




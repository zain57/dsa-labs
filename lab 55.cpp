#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
struct Node*head;
void Insert(int x)
{
	struct Node*temp=(Node*)malloc(sizeof( struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print()
{
	struct Node*temp=head;
	cout<<"list is";
	while(temp!=NULL)
	{
		cout<<" "<<temp->data;
		temp=temp->next;
		
	}
	cout<<"  \n";

}
int main()
{
	Insert(1);
	Insert(2);
	Insert(4);
	print();
	//Delete(2);
	print();
}

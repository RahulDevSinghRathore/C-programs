#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
	struct node* prev;
};
struct node* createnode(){
	int data;
	printf("Enter data: ");
	scanf("%d",&data);
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;
}
void printll(struct node* head){
	struct node* temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
}
void printReverse(struct node* head){
	struct node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->prev;
	}
}
int main(){
	int n,i;
	printf("Enter size of list: ");
	scanf("%d",&n);
	struct node* head,*temp;
	head = createnode();
	temp = head;
	for(i=0;i<n-1;i++){
		temp->next = createnode();
		temp->next->prev=temp;
		temp = temp->next;
	}
	printll(head);
	printf("\nReverse: ");
	printReverse(head);
}

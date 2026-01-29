#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* createnode(){
	int data;
	printf("Enter data: ");
	scanf("%d",&data);
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
void printll(struct node* head){
	struct node* temp;
	temp = head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main(){
	struct node* head,*temp;
	int n,i;
	printf("Enter number of nodes: ");
	scanf("%d",&n);
	head = createnode();
	temp = head;
	for(i=0;i<n-1;i++){
		temp->next=createnode();
		temp=temp->next;
	}
	printll(head);
}

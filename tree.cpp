#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* createnode(){
	int data;
	scanf("%d",&data);
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	if(data==-1){
		free(newnode);
		return NULL;
	}
	newnode->data=data;
	printf("Enter data of left node of %d: ",data);
	newnode->left = createnode();
	printf("Enter data of right node of %d: ",data);
	newnode->right = createnode();
	return newnode;	
}
void printll(struct node* head){
	if(head==NULL){
		return;
	}
	printf("%d ",head->data);
	printll(head->left);
	printll(head->right);
}
int main(){
	struct node* root;
	printf("Enter root node data: ");
	root = createnode();
	printll(root);
}

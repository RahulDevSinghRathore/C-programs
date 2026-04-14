#include<stdio.h>
#include<stdlib.h>

struct Node {
	int cofficient;
	int exponent;
	struct Node* next;
};

struct Node* createnode(){
	int coff, exp;
	printf("\nEnter cofficient of node: ");
	scanf("%d",&coff);
	printf("Enter exponent of node: ");
	scanf("%d",&exp);
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->cofficient = coff;
	newnode->exponent = exp;
	newnode->next = NULL;
	return newnode;
}

struct Node* addNode(int coff, int exp){
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->cofficient = coff;
	newnode->exponent = exp;
	newnode->next = NULL;
	return newnode;
}

void printList(struct Node* head){
	struct Node* temp = head;
	printf("List -> ");
	while(temp!=NULL){
		printf("%d,",temp->cofficient);
		printf("%d\t",temp->exponent);
		temp = temp->next;
	}
}

struct Node* addition(struct Node* head1, struct Node* head2){
	struct Node dummy;
	dummy.next = NULL;
	struct Node* prev = &dummy;
	struct Node* temp1 = head1;
	struct Node* temp2 = head2;
	while(temp1!=NULL && temp2!=NULL){
		if(temp1->exponent==temp2->exponent){
			prev->next = addNode(temp1->cofficient + temp2->cofficient, temp1->exponent);
			prev = prev->next;
			temp1 = temp1->next;
			temp2 = temp2->next;
		}else if(temp1->exponent>temp2->exponent){
			prev->next = addNode(temp1->cofficient,temp1->exponent);
			prev = prev->next;
			temp1 = temp1->next;
		}else if(temp1->exponent<temp2->exponent){
			prev->next = addNode(temp2->cofficient,temp2->exponent);
			prev = prev->next;
			temp2 = temp2->next;
		}
	}
	while(temp1!=NULL){
		prev->next = addNode(temp1->cofficient,temp1->exponent);
		prev = prev->next;
		temp1 = temp1->next;
	}
	while(temp2!=NULL){
		prev->next = addNode(temp2->cofficient,temp2->exponent);
		prev = prev->next;
		temp2 = temp2->next;
	}
	return dummy.next;
}

int main(){
	struct Node* head1, *head2;
	int i,j;
	head1 = createnode();
	struct Node* temp1 = head1;
	for(i = 1; i < 3; i++){
		temp1->next = createnode();
		temp1 = temp1->next;
	}
	head2 = createnode();
	struct Node* temp2 = head2;
	for(j = 1; j < 4; j++){
		temp2->next = createnode();
		temp2 = temp2->next;
	}
	printList(head1);
	printf("\n");
	printList(head2);
	printf("\n");
	struct Node* newList = addition(head1, head2);
	printList(newList);
}



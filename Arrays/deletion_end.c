#include<stdio.h>

void deletionAtEnd(int* nums, int* numsSize){
	(*numsSize)--;
}

int main(){
	int i;
	int arr[] = {1,5,2,8,6};
	int numsSize = sizeof(arr)/sizeof(arr[0]);
	deletionAtEnd(arr,&numsSize);
	
	for(i=0;i<numsSize;i++){
		printf("%d,",arr[i]);
	}
	return 0;
}

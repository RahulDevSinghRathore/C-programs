#include<stdio.h>

void insertAtLast(int* nums, int* numsSize, int value){
	nums[*numsSize] = value;
	(*numsSize)++;
}

int main(){
	int i;
	int arr[] = {1,3,5,2,4};
	int numsSize = sizeof(arr)/sizeof(arr[0]);
	int value = 9;
	insertAtLast(arr,&numsSize,value);
	for(i = 0;i<numsSize;i++){
		printf("%d,",arr[i]);
	}
	return 0;
}

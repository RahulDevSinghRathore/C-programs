#include<stdio.h>

void insertAtPosition(int* nums, int* numsSize, int value, int position){
	int i;
	for(i = *numsSize;i>position;i--){
		nums[i] = nums[i-1];
	}
	nums[position] = value;
	(*numsSize)++;
}

int main(){
	int i;
	int arr[] = {1,4,2,6,8};
	int numsSize = sizeof(arr)/sizeof(arr[0]);
	int position = 2;
	int value = 5;
	insertAtPosition(arr,&numsSize,value,position);
	
	for(i = 0;i<numsSize;i++){
		printf("%d,",arr[i]);
	}
	return 0;
}

#include<stdio.h>

void insert(int* nums, int* numsSize, int value){
	int i;
	for(i=*numsSize;i>0;i--){
		nums[i] = nums[i-1];
	}
	nums[0] = value;
	(*numsSize)++;
}

int main(){
	int i;
	int arr[] = {1,5,3,7,2};
	int numsSize = sizeof(arr)/sizeof(arr[0]);
	int value = 8;
	insert(arr,&numsSize,value);
	for(i = 0;i<numsSize;i++){
		printf("%d,",arr[i]);
	}
	return 0;
}

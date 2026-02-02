#include<stdio.h>

void deletionAtStart(int* nums, int* numsSize){
	int i;
	for(i = 0;i<*numsSize;i++){
		nums[i] = nums[i+1];
	}
	(*numsSize)--;
}

int main(){
	int i;
	int arr[] = {1,5,2,6,8};
	int numsSize = sizeof(arr)/sizeof(arr[0]);
	deletionAtStart(arr,&numsSize);
	
	for(i=0;i<numsSize;i++){
		printf("%d,",arr[i]);
	}
	return 0;
}

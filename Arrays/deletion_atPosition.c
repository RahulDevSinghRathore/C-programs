#include<stdio.h>

void delete_atPosition(int* nums, int *numsSize, int position){
	int i;
	
	for(i=position; i<*numsSize; i++){
		nums[i] = nums[i+1];
	}
	(*numsSize)--;
}

int main(){
	int arr[] = {2,3,5,1,7,8};
	int numsSize = sizeof(arr)/sizeof(arr[0]);
	int position = 3;
	delete_atPosition(arr, &numsSize, position);
	int i;
	for(i = 0; i < numsSize; i++){
		printf("%d,",arr[i]);
	}
	return 0;
}

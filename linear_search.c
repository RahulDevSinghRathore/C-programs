#include<stdio.h>

int linearSearch(int* nums, int numsSize, int element){
	
	int i;
	for(i = 0; i < numsSize; i++){
		if(nums[i]==element){
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[] = {2,8,1,0,7,3,4,9};
	int numsSize = sizeof(arr)/sizeof(arr[0]);
	int element = 3;
	int n = linearSearch(arr,numsSize,element);
	if(n==-1){
		printf("Element not found.");
	}else{
		printf("Element found at %d position.",n+1);
	}
	return 0;
}

#include<stdio.h>
#include<stdbool.h>

bool linearSearch(int* nums, int numsSize, int i, int element){
	if(nums[i]==element && i<numsSize){
		return true;
	}
	if(i>=numsSize){
		return false;
	}
	return linearSearch(nums, numsSize, i+1, element);
}

int main(){
	int arr[] = {2,1,6,4,8,9};
	int numsSize = sizeof(arr)/sizeof(arr[0]);
	int element = 5;
	bool x = linearSearch(arr, numsSize, 0, element);
	(x==true) ? printf("Element found.") : printf("Element not found.");
	return 0;
}

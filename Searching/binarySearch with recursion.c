#include<stdio.h>

int binarySearch(int* nums, int left, int right, int element){
	
	if(left>right){
		return -1;
	}
	int mid = left + (right - left)/2;
	
	if(nums[mid]==element){
		return mid;
		
	}else if(nums[mid]>element){
		binarySearch(nums, left, mid-1, element);
		
	}else{
		binarySearch(nums, mid+1, right, element);
	}
}

int main(){
	int i;
	int arr[] = {1,4,7,23,89,102};
	int numsSize = sizeof(arr)/sizeof(arr[0]);
	int element = 23;
	int left = 0, right = numsSize - 1;
	int index = binarySearch(arr, left, right, element);
	(index!=-1) ? printf("Element found at index %d.",index) : printf("Element not found");
	return 0;
}

#include<stdio.h>

int binarySearch(int* nums, int numsSize, int element){
	
	int left = 0;
	int right = numsSize-1;
	while(left<=right){
		int mid = left + (right - left)/2;
		
		if(nums[mid]==element){
			return mid;
			
		}else if(nums[mid]>element){
			right = mid - 1;
			
		}else{
			left = mid + 1;
		}
	}
	return -1;
}

int main(){
	int i;
	int arr[] = {1,5,7,9,13,25,47};
	int numsSize = sizeof(arr)/sizeof(arr[0]);
	int element = 25;
	int index = binarySearch(arr,numsSize,element);
	(index!=-1) ? printf("Element found at index %d.",index) : printf("Element not found.");
	return 0;
}

#include<stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int* nums, int numsSize){
	
	int i,j;
	for(i = 0; i < numsSize-1; i++){
		int minIndex = i;
		
		for(j = i+1; j < numsSize; j++){
			if(nums[j]<nums[minIndex]){
				minIndex = j;
			}
		}
		if(minIndex!=i){
			swap(&nums[i],&nums[minIndex]);
		}
	}
}

int main(){
	int i;
	int arr[] = {1,7,4,3,9,8};
	int numsSize = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,numsSize);
	for(i = 0; i < numsSize; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

#include<stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void insertionSort(int* nums, int numsSize){
	int i;
	for(i = 1; i < numsSize; i++){
		int key = nums[i];
		int j = i-1;
		while(j>=0 && nums[j]>key){
			nums[j+1] = nums[j];
			j--;
		}
		nums[j+1] = key;
	}
}

int main(){
	int i;
	int arr[] = {4,1,6,9,2,7,12,54,23,78,14,56,98,101,99};
	int numsSize = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,numsSize);
	for(i = 0; i < numsSize; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}


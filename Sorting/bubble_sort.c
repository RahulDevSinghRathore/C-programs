#include<stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int* nums, int numsSize){
	int i,j;
	for(i = 0; i < numsSize - 1; i++){
		for(j = 0; j < numsSize - i - 1; j++){
			if(nums[j]>=nums[j+1]){
				swap(&nums[j],&nums[j+1]);
			}
		}
	}
}

int main(){
	int i;
	int arr[] = {2,5,1,7,4,9};
	int numsSize = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,numsSize);
	for(i = 0; i<numsSize; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}


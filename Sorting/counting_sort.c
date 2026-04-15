#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int maxValue(int* nums, int numsSize){
	int max = INT_MIN;
	int i;
	for(i = 0; i<numsSize; i++){
		if(nums[i]>max){
			max = nums[i];
		}
	}
	return max;
}

void countingSort(int* nums, int numsSize){
	int i,j,k=0;
	int max = maxValue(nums,numsSize);
	int* frequency = calloc(max+1,sizeof(int));
	for(i=0;i<numsSize;i++){
		frequency[nums[i]]++;
	}
	for(j = 0; j<=max; j++){
		if(j!=0 && frequency[j]!=0){
			nums[k++] = j;
		}
	}
	free(frequency);
}

int main(){
	int i;
	int arr[] = {3,6,4,1,8,9,5};
	int numsSize = sizeof(arr)/sizeof(arr[0]);
	countingSort(arr,numsSize);
	for(i = 0; i<numsSize; i++){
		printf("%d,",arr[i]);
	}
	return 0;
}

#include<stdio.h>

void merge(int* nums, int left, int mid, int right){
	int i,j,k;
	int n1 = mid - left + 1;
	int n2 = right - mid;
	int L[n1], R[n2];
	for(i = 0; i<n1; i++){
		L[i] = nums[left + i];
	}
	for(j = 0; j<n2; j++){
		R[j] = nums[mid + j + 1];
	}
	i = 0;
	j = 0;
	k = left;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			nums[k] = L[i];
			i++;
			k++;
		}else{
			nums[k] = R[j];
			j++;
			k++;
		}
	}
	while(i<n1){
		nums[k] = L[i];
		i++;
		k++;
	}
	while(j<n2){
		nums[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int* nums, int left, int right){
	if(left<right){
		int mid = left + (right - left)/2;
		mergeSort(nums, left, mid);
		mergeSort(nums, mid+1, right);
		merge(nums, left, mid, right);
	}
}

int main(){
	int arr[] = {3,1,7,6,5,2,8,9};
	int i;
	int left = 0;
	int right = 7; //numsSize-1
	mergeSort(arr,left,right);
	for(i = 0;i<8;i++){
		printf("%d,",arr[i]);
	}
	return 0;
}

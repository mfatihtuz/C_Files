/*
The code snippet that sorts the numbers entered from the keyboard according to the "Bubble Sort" algorithm.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubble_sort(int arr[], int n){
	bool sorted;
	do{
		sorted = true;
		int i;
		for(i = 0; i<n-1; i++){
			if(arr[i] > arr[i+1]){
				int tmp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tmp;
				sorted = false;
			}
		}
	}while(sorted == false);
}

int main(){
	int arr[10];
	printf("Enter 10 numbers for sorting...\n\n");
	int i;
	for (i=0;i<10;i++){
		printf("Number[%d] : ",i+1);
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,10);
	
	for (i = 0; i<10; i++){
		printf("%d\t",arr[i]);
	}

	
	return 0;
}

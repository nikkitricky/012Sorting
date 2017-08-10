#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int* b){
	int t = *a;
	*a = *b;
	*b = t;
}

void sort012(int* arr, int len){
	int i = 0;
	int zero = 0;
	int two = len - 1;
	while (i <= two){
		if (arr[i] == 2){
			swap(&arr[i], &arr[two]);
			two--;
		}
		else if (arr[i] == 1){
			i++;
		}
		else if (arr[i] == 0){
			swap(&arr[i], &arr[zero]);
			zero++;
			i++;
		}
	}

}
int main(){
	printf("Enter the length of array:");
	int len;
	scanf("%d", &len);
	int *arr = (int*)malloc(sizeof(int)*len);
	for (int i = 0; i < len; i++){
		scanf("%d", &arr[i]);
	}
	printf("\nYour sorted array is:\t");
	sort012(arr, len);
	for (int i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}


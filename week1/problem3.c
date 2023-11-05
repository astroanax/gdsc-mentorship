#include<stdio.h>

void main(){
	int n;
	scanf("%d\n", &n);

	int arr[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int tmp;
	int x;
	if(n%2==0)
		x = (n/2) - 1;
	else
		x = (n-1)/2;

	for(int i = 0; i <= x; i++){
		if(arr[i] > arr[n-i-1]){
			tmp = arr[i];
			arr[i] = arr[n-i-1];
			arr[n-i-1] = tmp;
		}
		if(i > 0 && (arr[i-1] > arr[i])){
			tmp = arr[i];
			arr[i] = arr[i-1];
			arr[i-1] = tmp;
		}
		if(i < n-1 && (arr[i] > arr[i+1])){
			tmp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = tmp;
		}
	}
	
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	printf("\n");
}

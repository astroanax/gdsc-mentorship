#include<stdio.h>
#include<stdlib.h>

int **pascal(int a,  int n, int **arr){
	if(a == n){
		return arr;
	}
	arr[a][0] = 1;
	arr[a][a] = 1;
	
	for(int i = 1; i < a; i++){
		arr[a][i] = arr[a-1][i-1] + arr[a-1][i];
	}


	return pascal(a+1, n, arr);
}

void main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", n);
	//int arr[n][n];
	int **arr;
	arr = malloc(sizeof(*arr)*n);
	for(int i = 0; i < n; i++){
		arr[i] = malloc(sizeof(*arr)*(i+1));
	}
	for(int i = 0; i < n; i++)
		for(int j = 0; j < i+1; j++)
			arr[i][j] = 0;

	arr[0][0] = 1;
	arr = pascal(1, n, arr);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i+1; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	free(arr);
}

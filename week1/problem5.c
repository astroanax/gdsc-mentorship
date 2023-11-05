#include <stdio.h>

void main(){

	// get input
	int n;
	scanf("%d\n", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	int sum = 0, max = 0;
	for(int i = 0; i < n; i++){
		if(sum+arr[i]<0)
			sum=0;
		else
			sum+=arr[i];
		if(sum>=max)
			max=sum;
	}
	printf("%d\n", sum);
}

#include <stdio.h>

int fibo(int n, int zero, int first){
	int arr[100];
	arr[0] = zero;
	arr[1] = first;
	if(n > 1){
		for(int i=2; i<=n; i++){
			arr[i] = arr[i-2] + arr[i-1];
		}
	}
	return arr[n];
}

int main(){
	int zerothVal, firstVal, K;
	scanf("%d %d", &zerothVal, &firstVal);
	scanf("%d", &K);
	printf("%d\n", fibo(K, zerothVal, firstVal));
	
	return 0;
}

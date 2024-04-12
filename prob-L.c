#include <stdio.h>

int Jojonanci(int size, int firstVal, int secondVal){
	int arr[size];
	arr[0] = firstVal;
	arr[1] = secondVal;
	if(size > 1){
		for(int i=2; i<=size; i++){
			arr[i] = arr[i-1] - arr[i-2];
		}
	}
	return arr[size];
}

int main(){
	int T, N, X, Y;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d %d %d", &N, &X, &Y);
		printf("Case #%d: %d\n", i+1, Jojonanci(N, X, Y));
	}
	
	return 0;
}

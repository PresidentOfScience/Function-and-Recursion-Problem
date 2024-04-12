#include <stdio.h>

int A[100000] = {0};
int sum(int x, int total){
	for(int i=0; i<x; i++){
		total += A[i];
	}
	return total;
}

int main(){
	int T, N;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		for(int j=0; j<N; j++){
			scanf("%d", &A[j]);
		}
		printf("Case #%d: %d\n", i+1, sum(N, 0));
	}
	
	return 0;
}

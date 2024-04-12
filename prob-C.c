#include <stdio.h>

int A(int m, int n){
	if(m == 0) return n+1;
	else if(m > 0 && n == 0) return A(m-1, 1);
	else if(m > 0 && n > 0) return A(m-1, A(m, n-1));
}

int main(){
	int M, N;
	scanf("%d %d", &M, &N);
	printf("result: %d\n", A(M, N));
	
	return 0;
}

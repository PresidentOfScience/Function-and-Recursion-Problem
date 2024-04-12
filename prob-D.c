#include <stdio.h>

int F(int N){
	if(N == 1) return 1;
	else if(N % 2 == 1) return F(N-1)+F(N+1);
	else if(N % 2 == 0) return F(N/2);
}

int main(){
	int T, N;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		printf("Case #%d: %d\n", i+1, F(N));
	}
	
	return 0;
}

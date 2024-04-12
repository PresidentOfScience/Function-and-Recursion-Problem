#include <stdio.h>

int counter = 0;

int F(int n){
	if(n % 3 == 0 && n != 0) counter++;
	if(n == 0) return 1;
	else if(n == 1) return 2;
	else if(n % 5 == 0) return 2*n;
	else return F(n-1)+n+F(n-2)+n-2;
}

int main(){
	int T, N;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		int result = F(N);
		printf("Case #%d: %d %d\n", i+1, result, counter);
		counter = 0;
	}
	
	return 0;
}

#include <stdio.h>

int counter = 0;

int Fibo(int n){
	counter++;
	if(n == 0 || n == 1) return n;
	else return Fibo(n-1) + Fibo(n-2);
}

int main(){
	int T, n;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &n);
		Fibo(n);
		printf("Case #%d: %d\n", i+1, counter);
		counter = 0;
	}
	
	return 0;
}

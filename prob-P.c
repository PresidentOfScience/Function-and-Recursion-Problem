#include <stdio.h>

int oddJobo(int n){
	int arr[30];
	arr[0] = 0;
	for(int i=1; i<=n; i++){
		if(n%2 == 0 && n != 0) arr[n] = n/2;
		else arr[n] = 1;
	}
	return arr[n];
}

int main(){
	int N;
	scanf("%d", &N);
	printf("%d\n", oddJobo(N));
	
	return 0;
}

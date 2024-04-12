#include <stdio.h>

void epicGame(long long int n, int startValue){
	long long int counter = startValue;
	if(n == 1){
		if(counter%2 == 0) printf("Lili\n");
		else printf("Jojo\n");
		return;
	}
	else if(n%2 == 0){
		n /= 2;
		epicGame(n, startValue+1);
	}
	else if(n%2 == 1){
		n = n*3 + 1;
		epicGame(n, startValue+1);
	}
}

int main(){
	long long int T, N;
	scanf("%lld", &T);
	for(int i=0; i<T; i++){
		scanf("%lld", &N);
		printf("Case #%d: ", i+1);
		epicGame(N, 0);
	}
	
	return 0;
}

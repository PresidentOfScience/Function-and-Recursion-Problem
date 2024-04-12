#include <stdio.h>

void ABtester(int A, int B){
	if(A == B){
		printf("YES\n");
		return;
	}
	else if(A != B){
		if(A == 1){
			printf("NO\n");
			return;
		}
		else{
			if(A%2 == 0) A /= 2;
			else if(A%2 == 1) A = A*3 + 1;
			ABtester(A, B);
		}
	}
}

int main(){
	int T, A, B;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d %d", &A, &B);
		printf("Case #%d: ", i+1);
		ABtester(A, B);
	}
	
	return 0;
}

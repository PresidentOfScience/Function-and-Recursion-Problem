#include <stdio.h>

void branch(int arr[], int length, int value, int idx){
	if(idx <= length){
		value += arr[idx];
		branch(arr, length, value, 2*idx);
		branch(arr, length, value, 2*idx+1);
	}
	else if(idx > length && idx%2 == 0){
		printf("%d\n", value);
		return;
	}
}

int main(){
	int T, N, A[120];
	scanf("%d", &T);
	for(int i=1; i<=T; i++){
		scanf("%d", &N);
		for(int j=1; j<=N; j++){
			scanf("%d", &A[j]);
		}
		printf("Case #%d:\n", i);
		branch(A, N, 0, 1);
	}
	
	return 0;
}

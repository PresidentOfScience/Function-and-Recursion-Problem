#include <stdio.h>
#include <string.h>

int main(){
	int T, n;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		char S[100][1000];
		scanf(" %d", &n);
		scanf(" %c %c", S[0], S[1]);
		getchar();
		for(int j=2; j<=n; j++){
			S[j][0] = 0;
			strcat(S[j], S[j-1]);
			strcat(S[j], S[j-2]);
		}
		printf("Case #%d: %s\n", i+1, S[n]);
	}
	
	return 0;
}

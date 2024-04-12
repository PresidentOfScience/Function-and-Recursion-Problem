#include <stdio.h>
#include <string.h>

void palindromeChecker(char string[1200], int l, int r){
	if (l > r) {
		printf("yes\n");
		return;
	}
	if (string[l] != string[r]) {
		printf("no\n");
		return;
	}
	palindromeChecker(string, l+1, r-1);
}

int main(){
	int T;
	char S[1200];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%s", S);
		int length = strlen(S);
		printf("Case #%d: ", i+1);
		palindromeChecker(S, 0, length-1);
	}
	
	return 0;
}

#include <stdio.h>
#include <string.h>

void stringReverse(char string[], int l, int r) {
	if (l < r) {
		stringReverse(string, l+1, r);	
	}
	printf("%c", string[l]);
	return;
}

int main(){
	int T;
	char string[2000];
	scanf("%d", &T); getchar();
	for(int i=0; i<T; i++){
		scanf("%[^\n]", string); getchar();
		int lastIndex = strlen(string)-1;
		printf("Case #%d: ", i+1);
		stringReverse(string, 0, lastIndex);
		puts("");
	}

	return 0;
}

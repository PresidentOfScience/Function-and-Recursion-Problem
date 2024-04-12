#include <stdio.h>

char chess[10][10];
void cbh(int bh1, int bh2, int n){
	if(bh1>7 || bh2>7 || bh1<0 || bh2<0){
		return;
	}
	if(chess[bh1][bh2] == 'M'){
		return;
	}
	chess[bh1][bh2] = 'M';
	if(n == 0){
		return;
	}
	cbh(bh1+1, bh2+2, n-1);
	cbh(bh1+1, bh2-2, n-1);
	cbh(bh1-1, bh2+2, n-1);
	cbh(bh1-1, bh2-2, n-1);
	
	cbh(bh1+2, bh2+1, n-1);
	cbh(bh1+2, bh2-1, n-1);
	cbh(bh1-2, bh2+1, n-1);
	cbh(bh1-2, bh2-1, n-1);
}
int cwh(int wh1, int wh2, int n){
	if((wh1>7 || wh2>7 || wh1<0 || wh2<0)){
		return 0;
	}
	if(chess[wh1][wh2] == 'M'){
		return 1;
	}
	if(n == 0){
		return 0;
	}
	else{
		if(cwh(wh1+1, wh2+2, n-1)) return 1;
		if(cwh(wh1+1, wh2-2, n-1)) return 1;
		if(cwh(wh1-1, wh2+2, n-1)) return 1;
		if(cwh(wh1-1, wh2-2, n-1)) return 1;
		
		if(cwh(wh1+2, wh2+1, n-1)) return 1;
		if(cwh(wh1+2, wh2-1, n-1)) return 1;
		if(cwh(wh1-2, wh2+1, n-1)) return 1;
		if(cwh(wh1-2, wh2-1, n-1)) return 1;
	}
	return 0;
}

int main(){
	int T, N, bh1, wh1, bh2, wh2;
	char mbh[2], mwh[2];
	scanf("%d", &T); getchar();
	for(int i=0; i<T; i++){
		scanf("%d", &N); getchar();
		scanf("%s %s", mbh, mwh); getchar();
		for(int j=0; j<2; j++){
			if(mbh[j] == 'A'){
				bh2 = 0;
			}
			else if(mbh[j] == 'B'){
				bh2 = 1;
			}
			else if(mbh[j] == 'C'){
				bh2 = 2;
			}
			else if(mbh[j] == 'D'){
				bh2 = 3;
			}
			else if(mbh[j] == 'E'){
				bh2 = 4;
			}
			else if(mbh[j] == 'F'){
				bh2 = 5;
			}
			else if(mbh[j] == 'G'){
				bh2 = 6;
			}
			else if(mbh[j] == 'H'){
				bh2 = 7;
			}
			else if(mbh[j] == '1'){
				bh1 = 7;
			}
			else if(mbh[j] == '2'){
				bh1 = 6;
			}
			else if(mbh[j] == '3'){
				bh1 = 5;
			}
			else if(mbh[j] == '4'){
				bh1 = 4;
			}
			else if(mbh[j] == '5'){
				bh1 = 3;
			}
			else if(mbh[j] == '6'){
				bh1 = 2;
			}
			else if(mbh[j] == '7'){
				bh1 = 1;
			}
			else if(mbh[j] == '8'){
				bh1 = 0;
			}
		}
		for(int j=0; j<2; j++){
			if(mwh[j] == 'A'){
				wh2 = 0;
			}
			else if(mwh[j] == 'B'){
				wh2 = 1;
			}
			else if(mwh[j] == 'C'){
				wh2 = 2;
			}
			else if(mwh[j] == 'D'){
				wh2 = 3;
			}
			else if(mwh[j] == 'E'){
				wh2 = 4;
			}
			else if(mwh[j] == 'F'){
				wh2 = 5;
			}
			else if(mwh[j] == 'G'){
				wh2 = 6;
			}
			else if(mwh[j] == 'H'){
				wh2 = 7;
			}
			else if(mwh[j] == '1'){
				wh1 = 7;
			}
			else if(mwh[j] == '2'){
				wh1 = 6;
			}
			else if(mwh[j] == '3'){
				wh1 = 5;
			}
			else if(mwh[j] == '4'){
				wh1 = 4;
			}
			else if(mwh[j] == '5'){
				wh1 = 3;
			}
			else if(mwh[j] == '6'){
				wh1 = 2;
			}
			else if(mwh[j] == '7'){
				wh1 = 1;
			}
			else if(mwh[j] == '8'){
				wh1 = 0;
			}
		}
		
		for(int j=0; j<8; j++){
			for(int k=0; k<8; k++){
				chess[j][k] = '0';
			}
		}
		printf("Case #%d: ", i+1);
		cbh(bh1, bh2, N);
		cwh(wh1, wh2, N);
		if(cwh(wh1, wh2, N) == 1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}

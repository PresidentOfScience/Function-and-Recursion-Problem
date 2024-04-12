#include <stdio.h>

char cb[8][8];
int frow, fcol;

void cbh(int row, int col, int step){
	if(step > 6 || row > 7 || col > 7 || row < 0 || col < 0){
		return;
	}
	if(cb[row][col] == 0 || cb[row][col] > step){
		cb[row][col] = step;
	}
	if(row == frow && col == fcol){
		return;
	}
	cbh(row+1, col+2, step+1);
	cbh(row-1, col+2, step+1);
	cbh(row+1, col-2, step+1);
	cbh(row-1, col-2, step+1);
	cbh(row+2, col+1, step+1);
	cbh(row-2, col+1, step+1);
	cbh(row+2, col-1, step+1);
	cbh(row-2, col-1, step+1);
}

int main(){
	int T;
	int step = 0;
	int row, col;
	char idx[3], idx1[3];
	
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		step = 0;
		scanf("%s %s", idx, idx1);
		row = 7 - idx[1] + '1';
		col = idx[0] - 'A';
		frow = 7 - idx1[1] + '1';
		fcol = idx1[0] - 'A';
		cbh(row, col, step);
		printf("Case #%d: %d\n", i+1, cb[frow][fcol]);
		
		for(int j=0; j<8; j++){
			for(int k=0; k<8; k++){
				cb[j][k] = 0;
			}
		}
	}
	return 0;
}

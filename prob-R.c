#include <stdio.h>

long long int W, X, Y;
char string[255][255];
long long string2[255][255];
long long counter = 0;

void move(long long A, long long B){
    if((string[B][A] != '#') && (string2[B][A] != 1) && ((A >= 0) && (A < Y)) && ((B >= 0) && (B < X))){
        if(string[B][A] == '.'){
			counter++;
        }
        string2[B][A] = 1;
    }
    else return;
    
    move(A+1, B);
    move(A-1, B);
    move(A, B+1);
    move(A, B-1);
}

int main(){
    long long x1, y1;
    scanf("%lld", &W); getchar();
    for(long long i=1; i<=W; i++){
        scanf("%lld %lld", &X, &Y); getchar();
        for(long long j=0; j<X; j++){
            for(long long k=0; k<Y; k++){
                string2[j][k] = 0;
                scanf("%c", &string[j][k]);
                if(string[j][k] == 'S'){
                    x1 = k;
                    y1 = j;
                }
            }
            getchar();
        }
        move(x1, y1);
        printf("Case #%lld: %lld\n", i, counter);
        counter = 0;
    }
}

#include <stdio.h>
#include <stdlib.h>
void hanoi(int N,char A,char C,char B){
    if(N==0){return;}
    hanoi(N,A,B,C);
    printf("move one disc from %c to %c",A,C);
    hanoi(N-1,B,A,C); }
int main() {
	int N;
	scanf("%d",&N);
	char A=A,B=B,C=C;
	hanoi(N,A,B,C);
	return 0; }
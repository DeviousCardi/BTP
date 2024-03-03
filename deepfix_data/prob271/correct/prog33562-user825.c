#include <stdio.h>
#include <stdlib.h>
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void henoi(int N,char A,char B,char C){
     if(N==1){
        move(A,B);
        move(B,C); }
    int i;
    for(i=1;i<N;i++){
        henoi(i,A,B,C);
        henoi(i,C,A,B);
        henoi(i,B,A,C); } }
int main() {
    int N;
    char A,B,C;
    A='A';
    B='B';
    C='C';
    scanf("%d",&N);
    henoi(N,A,B,C);
	return 0; }
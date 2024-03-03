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
void hanoi(char A, char B,char C, int N){
    if(N==1){
        move(A,B);
        return; }
    hanoi(A,C,B,N-1);
    move(A,B);
    hanoi(C,B,A,N-1); }
void hanoi2(char A,char B,char C,int N){
    if(N==1){
        move(A,C);
        move(C,B);
        return; }
    hanoi2(A,B,C,N-1);
    move(A,C);
    hanoi(B,A,C,N-1);
    move(C,B);
    hanoi2(A,B,C,N-1); }
int main() {
	int N;
	char A='A',B='B',C='C';
	scanf("%d",&N);
	if(N>0) hanoi2(A,C,B,N);
	return 0; }
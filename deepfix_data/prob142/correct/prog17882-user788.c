#include <stdio.h>
#include <stdlib.h>
char A='A',B='B',C='C';
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoi(char A,char B,char C,int n) {
    if(n==0)
    return;
    if(n==1) {
        if((A=='C')&&(B=='A'))
        return;
        else {
          move(A,B);
          move(B,C); } }
    else if(n==2) {
        move(A,B);
        move(B,C);
        move(A,B);
        move(C,A);
        move(B,C);
        move(A,B);
        move(B,C); }
    else {
        hanoi(A,B,C,n-1);
        move(A,B);
        hanoi(C,A,B,n-1);
        move(B,C);
        hanoi(A,B,C,n-1); } }
int main() {
	int N;
	scanf("%d",&N);
	hanoi(A,B,C,N);
	return 0; }
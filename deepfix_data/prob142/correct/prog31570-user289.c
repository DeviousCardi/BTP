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
void twh(char A,char B,char C,int n) {
    if(n==0) {
        return; }
    twh('A','C','B',n-1);
    twh('B','C','A',n-1);
    move(B,C); }
int main() {
    int n;
    char A='A';
    char B='B';
    char C='C';
    scanf("%d",&n);
    twh(A,B,C,n);
	return 0; }
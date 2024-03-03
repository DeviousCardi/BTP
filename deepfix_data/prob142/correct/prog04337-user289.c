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
    if(n==0)
    {return;}
    twh(C,B,A,n-1);
    move(A,B);
    twh(B,C,A,n-2);
    move(B,C); }
int main() {
    int n;
    scanf("%d",&n);
char A='A';
char B='B';
char C='C';
twh(A,B,C,n);
	return 0; }
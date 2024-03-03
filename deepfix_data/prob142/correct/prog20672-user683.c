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
void hanoi(int n,char A,char C,char B,int f) {
    int flag=0;
    if(n==0) return;
    hanoi(n-1,A,C,B,0);
    if (A-B!=1) move(A,B);
    else {
        move(A,C);
        flag=1; }
    hanoi(n-1,C,A,B,flag);
    flag=0;
    if(B-C!=1) move(B,C);
    hanoi(n-1,A,C,B,0); }
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n,'A','C','B',0);
	return 0; }
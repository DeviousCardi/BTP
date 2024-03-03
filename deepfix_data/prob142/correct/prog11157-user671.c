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
void hanoi(char a,char b,char c,int n){
    hanoi(a,b,c,n-1);
    move(a,b);
    hanoi(c,a,b,n-1);
    hanoi(b,c,a,n-1);
    move(b,c);
    hanoi(a,b,c,n-1);
    return; }
int main() {
	int n;
	char A,B,C;
	scanf("%d",&n);
	hanoi(A,B,C,n);
	return 0; }
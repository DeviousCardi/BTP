#include <stdio.h>
#include <stdlib.h>
void hanoi(int a,int b,int c) {
    char A,B,C;
    if(a!=0) {
    hanoi(a-1,b+1,c);move(A,B);
    hanoi(a,b-1,c+1);move(B,C);
    hanoi(a-1,b+1,c);move(A,B);
    hanoi(a+1,b,c-1);move(C,A); } }
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n,0,0);
	return 0; }
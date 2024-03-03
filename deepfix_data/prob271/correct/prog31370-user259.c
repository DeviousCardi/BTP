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
int main() {
	int N;
	scanf("%d",&N);
	char a='A',b='B',c='C';
	hanoi(N,a,c,b);
	return 0; }
void hanoi(int n,char A,char C,char B) {
    if(n==0)
    return;
    hanoi(n-1,A,B,C);
    printf("%c to %c",A,C);
    hanoi(n-1,B,C,A); }
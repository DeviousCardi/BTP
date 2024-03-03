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
void hanoi(int n,char a,char b,char c) {
    if(n>0) {
    hanoi(n-1,b,a,c); {
        printf("%d->%d",b,a,c); }
    hanoi(n-1,a,c,b) } }
int main() {
	int n;
	scanf("%d",&n);
	char A,B,C;
	hanoi(n,A,B,C);
	return 0; }
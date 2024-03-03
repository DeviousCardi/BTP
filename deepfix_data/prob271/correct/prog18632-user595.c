#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char a,char b,char c) { }
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
	int n;char a=a,b=b,c=c;
	scanf("%d",&n);
	hanoi(n,a,b,c);
	return 0; }
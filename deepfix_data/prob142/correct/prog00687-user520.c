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
void toh(int n,char a, char b, char c) {
    if(n>0)
    {toh(n-1,a,c,b);
    toh(n-1,b,a,c);
    move(a,b);
    toh(n-1,c,b,a);
    move(b,c);
    toh(n-1,a,c,b);
    toh(n-1,b,a,c);} }
int main() {
	char a,b,c;
	int n;
	scanf("%d", &n);
	a='A'; b='B'; c='C';
	toh(n,a,b,c);
	return 0; }
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
void toh(int n,char a, char c, char b) {
    if(n<1)
    return;
    toh(n-1,a,c,b);
    toh(n-1,c,a,b);
    move(b,c);
    toh(n-1,a,c,b); }
int main() {
	int n;
	scanf("%d",&n);
	toh(n,'A','C','B');
	return 0; }
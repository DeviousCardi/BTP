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
void toh(int n,char from,char to,char mid) {
    if(n==1) {
        move(from,mid);
        move(mid,to); }
    toh(n-1,from,to,mid);
    toh(1,from,to,mid); }
int main() {
	int n;
	char a,b,c;
	scanf("%d",&n);
	toh(n,a,c,b);
	return 0; }
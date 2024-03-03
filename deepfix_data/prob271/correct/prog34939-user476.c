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
void toh(int n,char a,char b,char c) {
    if(n<1)
        return;
    if(n==1)
        move(a,b);
        else {
       toh(n-1,a,b,c);
        toh(1,a,b,c);
        toh(1,b,c,a);
        toh(n-1,b,c,a); } }
int main() {
	int n;
	char A='A',B='B',C='C';
	scanf("%d",&n);
	toh(n,A,B,C);
	return 0; }
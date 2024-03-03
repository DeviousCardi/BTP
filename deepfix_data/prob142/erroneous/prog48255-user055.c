#include <stdio.h>
#include <stdlib.h>
char a,b,c;
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void print(int m, char From, char To) {
    if(m==1)
    move(From, To);
    else {
        print(n-1,a,b);
        print(n-1,b,c);
        print(1,a,b);
        print(n-1,c,a);
        print(1,b,c);
        print(n-1,a,b);
        print(n-1,b,c); }
int main() {
	int n;
	scanf("%d",&n);
	if(n==0)
	printf(" ");
	else
	print(n,a,c);
	return 0; }
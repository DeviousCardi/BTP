#include <stdio.h>
#include <stdlib.h>
void move(char From, char To);
void tower(int n,char a,char b,char c);
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" ");
    }printf("%c",From);
    printf("%c->%c",From,To);
    num++; }
int main()
{   char A,B,C;
    int n;
	scanf("%d",&n);
	move(A,B);
	return 0; }
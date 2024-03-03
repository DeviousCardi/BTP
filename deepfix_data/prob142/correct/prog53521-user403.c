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
int main()
{   char a,b,c;
int n;
	scanf("%d",&n);
	tower(n,a,b,c);
	return 0; }
void tower(int n,char a,char b,char c) {
    if(n==1) {
    move(a,b);
    move(b,c); }
    if(n==2) { } }
#include <stdio.h>
#include <stdlib.h>
void tower(int n,char a,char b,char c) {
    if(n>0) {
        tower(n-1,a,b,c);
        move(a,b);
        tower(n-1,b,c,a);
         move(b,c);
        tower(n-1,c,a,b); } }
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
	int n;
	scanf("%d",&n);
	tower(n,'A','B','C');
	return 0; }
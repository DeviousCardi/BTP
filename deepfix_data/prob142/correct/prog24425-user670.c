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
void tower(int n,char a,char b,char c) {
    if(n==0) {
        return ;
        if(n==1) {
            return move(a,b); }
        if(n>1) {
            tower(n-1,a,c,b);
            tower(1,b,a,c);
            tower(n-1,c,b,a); } } }
int main() {
	int n;
	scanf("%d",&n);
	return 0; }
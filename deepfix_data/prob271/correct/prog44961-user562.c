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
void hanoi(char a,char c ,char b,int n) {
    if(n==1) {
        if(a=='A' && c=='C') {
            move(a,b);
            move(b,c); }
        else
        move(a,c);
        return; }
    hanoi(a,b,c,n-1);
    hanoi(b,c,a,n-1);
    hanoi(a,b,c,1);
    hanoi(c,a,b,n-1);
    if(b=='A' && c=='C') {
        move(b,a);
        move(a,c); }
    else
    move(b,c);
    hanoi(a,b,c,n-1);
    hanoi(b,c,a,n-1); }
int main() {
	int n;
	scanf("%d",&n);
	if(n==0)return 0;
	hanoi('A','C','B',n);
	return 0; }
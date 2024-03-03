#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char a,char b,char c) {
    if(n==1) {
        move(a,b);
        move(b,c); }
    else {hanoi(n-1,a,b,c);
    move(a,b);
    hanoi(n-1,c,b,a);
    hanoi(1,a,b,c); } }
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
	int n;char a='A',b='B',c='C';
	if(n==0)return 0;
	scanf("%d",&n);
	hanoi(n,a,b,c);
	return 0; }
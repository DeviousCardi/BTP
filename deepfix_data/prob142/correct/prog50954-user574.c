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
void hanoi(char a, char b, char c, int n) {
    if(n==0)
        return;
    hanoi(b,a,c,n-1);
    if(((a=='A')&&(c=='B'))||((a=='B')&&(c=='C'))||((a=='C')||(c=='A')))
        move(a,c);
    else {
            move(a,b);
            move(a,c); }
    hanoi(c,b,a,n-1);
    move(b,c); }
int main() {
	char a='A', b='B', c='C';
	int n;
	scanf("%d",&n);
	hanoi(a,b,c,n);
	return 0; }
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
void hanoi(char f, char a, char t, int n) {
    if(n==0)
        return;
	if(((f=='A')&&(t=='B'))||((f=='B')&&(t=='C'))||((f=='C')&&(t=='A')))
		move(f,t);
	else {
			move(f,a); move(a,t); }
	hanoi(a,f,t,n-1);
	if(((a=='A')&&(t=='B'))||((a=='B')&&(t=='C'))||((a=='C')&&(t=='A')))
		move(a,t);
	else
		{ move(a,f); move(f,t); }
	hanoi(t,a,f,n-1); }
int main() {
	char a='A', b='B', c='C';
	int n;
	scanf("%d",&n);
	hanoi(a,c,b,n);
	return 0; }
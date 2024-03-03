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
int main() {
	char a='A',b='B',c='C';
	int n;
	scanf("%d",&n);
	if(n>2) {
	    move(a,b);
	    move(b,c);
	    move(a,b);
	    move(c,b);
	    move(b,a);
	    move(b,c);
    	move(a,b);
	    move(b,c);
    	move(a,b);
        move(c,b);
	    move(b,a);
	    move(c,b);
	    move(b,a);
	    move(b,c); }
	if(n==1) {
	    move(a,b);
	    move(b,c); }
	if(n==2) {
	    move(a,b);
	    move(b,c);
	    move(a,b);
	    move(c,a);
    	move(a,b);
	    move(b,c); }
	return 0; }
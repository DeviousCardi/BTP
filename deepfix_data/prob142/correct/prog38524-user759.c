#include <stdio.h>
#include <stdlib.h>
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0)
        printf("\n%5d: ", num);
    else
        printf(" ");
    printf("%c->%c", From, To);
    num++; }
void rmove(char a,char c,char b) {
	if((a=='A'&&c=='B') || (a=='B'&&c=='C') || (a=='C'&&c=='A'))
		    move(a,c);
	else {
		move(a,b);
		move(b,c); } }
void h(int n,char a,char c,char b) {
    if(!n)  return;
    if(n==1) {
        rmove(a,c,b);
		return; }
	if(n==2) {
	    rmove(a,c,b);
	    rmove(a,b,c);
	    rmove(c,a,b);
	    rmove(b,c,a);
	    rmove(a,c,b);
	    return; } }
int main() {
    int n;
    scanf("%d",&n);
    h(n,'A','C','B');
	return 0; }
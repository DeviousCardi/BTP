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
void hanoi(int n,char a,char c,char b) {
    if(n==1) {
        if(a=='A'&&c=='C') {
        	hanoi(1,a,b,c);
        	hanoi(1,b,c,a);
        	return; }
        if(a=='C'&&c=='B')
            return;
        move(a,c);
        return; }
    hanoi(n-1,a,b,c);
    hanoi(n-1,b,c,a);
    move(a,b);
    hanoi(n-1,c,a,b);
    move(b,c);
    hanoi(n-1,a,b,c);
    hanoi(n-1,b,c,a);
    return; }
int main() {
	int n;
	scanf("%d",&n);
	if(n!=0&&n<=2)
	    hanoi(n,'A','C','B');
	else if(n>2)
	    hanoi(n,'A','C','B');
	return 0; }
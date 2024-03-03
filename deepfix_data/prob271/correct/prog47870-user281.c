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
	int n,i,b=0,c=0;
	scanf("%d ",&n);
	int a=n;
	for(i=0;i<n;i++) {
	    if(b==0) {
	        move('A','B');
	        b++; }
	    move('B','C'); }
	return 0; }
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
	int n,i,a=0;
	scanf("%d",&n);
	for(i='A';i<='C';i++){
	    if(a==n)
	    break;
	    move(i,i+1);
	    a++; }
	return 0; }
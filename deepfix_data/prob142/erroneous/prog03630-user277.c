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
	int i,n;
	char A,B,C;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    move(From A, To B); }
	return 0; }
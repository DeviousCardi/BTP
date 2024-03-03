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
	char Hanoi(int n,char A,char B,char C){
	    if (n==0)
	    return 0;
	    Hanoi(n-1,A,B,C);
	    printf("move one disk form %c to %c",A,C);
	    Hanoi(n-1,B,A,C); }
	return 0; }
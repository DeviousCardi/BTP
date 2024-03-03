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
  hanoi(int n,char A,char B ,char C);
int main() {
	int n;
	char 'A','B','C';
	scanf("%d",&n);
	hanoi(n-1,A,B,C);
	printf("%c->%c",From A to C);
	hanoi(n-1,C,B,A);
	printf("%c->%c",From C to B);
	hanoi(n-1,B,C,A);
		printf("%c->%c",From B to C);
	return 0; }
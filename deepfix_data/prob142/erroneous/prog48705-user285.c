#include <stdio.h>
#include <stdlib.h>
char A,B,C;
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
 void tower(int n,char A,char C,char B) {
     tower(n-1,A,B,C);
     move(A,c);
     tower(n-1,B,C,A); }
int main() {
    int n;
    scanf("%d",&n);
    tower(n,A,C,B);
	return 0; }
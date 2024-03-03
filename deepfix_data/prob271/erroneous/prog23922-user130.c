#include <stdio.h>
#include <stdlib.h>
char a='A';char b='B';char c='C';
void hanoi(n,char A,char B )
{if(n==1)
printf("%c %c",A,B);
else {
   hanoi(n-1,A,B) ;
   hanoi(n-1,B,C);
   hanoi(1,A,B);
   hanoi(n-1,C,A);
   hanoi(1,B,C);
   hanoi(n-1,A,B);
   hanoi(n-1,B,C);
}}
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
int main() {int n;
	scanf("%d", n);
	hanoi(n,A,B);
	return 0; }
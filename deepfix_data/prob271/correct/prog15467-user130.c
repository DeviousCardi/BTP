#include <stdio.h>
#include <stdlib.h>
char a='A';char b='B';char c='C';
void move(char From, char To) { const int NumPerLine = 8; static int num = 0; if (num%NumPerLine == 0) { printf("\n%5d: ", num); } else { printf(" "); } printf("%c->%c", From, To); num++; }
void hanoi(int n,char a,char b)
{if(n==1)
move(a,b);
else {
   hanoi(n-1,a,b) ;
   hanoi(n-1,b,c);
   hanoi(1,a,b);
   hanoi(n-1,c,a);
   hanoi(1,b,c);
   hanoi(n-1,a,b);
   hanoi(n-1,b,c);
}}
int main() {int n;
	scanf("%d",&n);
	hanoi(n,a,b);
	return 0; }
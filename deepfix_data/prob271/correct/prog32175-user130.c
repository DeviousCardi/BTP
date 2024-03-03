#include <stdio.h>
#include <stdlib.h>
char a='A';char b='B';char c='C';int k=0;
void move(char From, char To) { const int NumPerLine = 8; static int num = 0; if (num%NumPerLine == 0) { printf("\n%5d: ", num); } else { printf(" "); } printf("%c->%c", From, To); num++; }
void hanoi(int n,char a,char b,char c) {
    if(n!=0) {
    if((n==1)&&(k>=1))
printf("%c%c ",a,b);
else
{k++;
   hanoi(n-1,a,b,c) ;
   hanoi(n-1,b,c,a);
   hanoi(1,a,b,c);
   hanoi(n-1,c,a,b);
   hanoi(1,b,c,a);
   hanoi(n-1,a,b,c);
   hanoi(n-1,b,c,a);
}} }
int main() {int n;
	scanf("%d",&n);
	hanoi(n,a,b,c);
	return 0; }
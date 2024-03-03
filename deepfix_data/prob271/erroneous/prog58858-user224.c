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
void Toh(int n)
{if(n==1)
{move('A','C');
 move('B','C');
 if(n%2==0)
Toh(n-1);
}}
int main() {
   int A[N],B[N],C[N];
   for(i=0;i<N;i++)
   A[i]=i
   Toh(n);
	return 0; }
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
void hanoi( int n , char a , char c , char b) {
    if( n==0){return;}
    if((n==1)&&(a == 'A')&&(c == 'C')) {
        move(a,b);
        move(b,c); }
    else if(n>1)
    {hanoi( n-1 , a , c ,b);
     move( a , b) ;
     hanoi( n-1 , c , b  ,a);
     hanoi( n , b,c,a); }
else {
         move (a,c); }
     return; }
int main() {
	int n;
	char a = 'A';
    char b = 'B';
	char c = 'C';
	scanf("%d",&n);
	hanoi( n ,a ,c , b);
	return 0; }
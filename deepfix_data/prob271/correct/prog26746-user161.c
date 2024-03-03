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
    if(n==1) {
        move( a , b);
        move(b,c); }
    hanoi( n-1 , a , c ,b);
    move( a , b) ;
    hanoi( n-1 , c , a , b);
    move (b , c);
    hanoi (n-1, a , c , b);
    return; }
int main() {
	int n;
	char a = 'a';
    char b = 'b';
	char c = 'c';
	scanf("%d",&n);
	hanoi( n ,a ,c , b);
	return 0; }
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
void hanoi(int n , char A , char C , char B){
    if(n==0)return ;
    hanoi(n-1, A , C, B) ;
    move(A, B) ;
    hanoi(n-1 , C , A , B);
    move(C, B) ;
    hanoi(n-1 , A , C , B); }
int main() {
	int n ;
	char a , b , c ;
	a = 'A';
	b = 'B' ;
	c = 'C' ;
	scanf("%d",&n);
	hanoi (n , a, b ,c) ;
	return 0; }
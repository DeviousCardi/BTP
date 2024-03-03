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
void hanoi(int n)
{   char a='A',b='B',c='C';
    if(n==0)
    return ;
    if(n==1) {
        move(a,b);
        move(b,c);
        return ; }
    if(n==2) {
        hanoi(n-1);
        move(a,b);
        move(c,a);
        move(b,c);
        hanoi(n-1); }
        hanoi(n-1);
        move(a,b);
        move(c,b);
        move(c,a);
        move(b,a);
        move(b,c);
        hanoi(n-1); }
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n);
	return 0; }
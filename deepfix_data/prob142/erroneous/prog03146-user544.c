#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char A,char B,char C){
    if(n==0)
    return ;
    hanoi(n-1,A,B,C); }
void move(char From, char To,int n) {
    const int NumPerLine = 8;
    static int num = 0;
    hanoi(n,A,B,C);
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
int main() {
	int n;
	char from,to;
	scanf("%d",&n);
	move(from,to,n);
	return 0; }
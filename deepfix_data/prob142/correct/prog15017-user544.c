#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char A,char B,char C){
    if(n==0)
    return ;
    hanoi(n-1,A,B,C);
  return  move(A,B);
    hanoi(n-1,B,A,C);
    move(B,C);
    hanoi(n-1,C,B,A);
    move(C,A); }
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
int main() {
	int n;
	char A,B,C;
	scanf("%d",&n);
	hanoi(n,A,B,C);
	return 0; }
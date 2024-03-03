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
void hanoi(char A,char B,char C,int n){
   if(n==1){
   move(A,B);
   move(B,C);
   return; }
   hanoi(A,C,B,n-1);
   hanoi(B,A,C,n-1); }
int main() {
	int n;
	scanf("%d",&n);
	if(n==0)
	printf("");
	else
	hanoi('A','B','C',n);
	return 0; }
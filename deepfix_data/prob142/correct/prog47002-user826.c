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
 void hanoi(int r,char A,char B,char C) {
     if(r==1) {
         move(A,B);
         move(B,C); }
     else {
         hanoi(r-1,A,B,C);
         move(A,B);
         hanoi(r-1,A,C,B);
         hanoi(r-1,A,B,C); } }
int main() {
	int n;
	scanf("%d",&n);
	if(n==0)
	printf(" ");
hanoi(n,'A','B','C');
	return 0; }
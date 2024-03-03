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
void hanoi(int n,int A,int C,int B)
{   if(n==0) {
       return; }
   if(A=='A'&&C=='B'&&B=='C') {
       hanoi(n-1,A,B,C); }
     hanoi(n-1,A,B,C);
    move(A,B);
    hanoi(n-1,B,C,A);
    move(B,C); }
int main() {
    int n;
    char A='A',B='B',C='C';
    scanf("%d",&n);
    hanoi(n,A,C,B);
	return 0; }
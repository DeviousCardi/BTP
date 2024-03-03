#include <stdio.h>
#include <stdlib.h>
 char A='A',B='B',C='C';
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoi(int n,char A,char C) {
    if(n==0)
    return;
    if((n==1&&A=='C')&&(C=='A'))
    move(C,A);
    hanoi(n-1,A,C);
    move(A,B);
    hanoi(n-1,C,A);
    move(B,C);
    hanoi(n-1,A,C); }
int main() {
    int n;
    scanf("%d",&n);
    hanoi(n,A,C);
	return 0; }
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
void hanoi(char B,char C,char A,int n) {
    if(n==1) {
        move(B,C); }
    else {
        hanoi(B,A,C,n-1);
        move(B,C);
        hanoi(A,C,B,n-1) } }
int main() {
    int n;
    scanf("%d",&n);
    if(n!=0) {
        hanoi('B','C','A',n); }
	return 0; }
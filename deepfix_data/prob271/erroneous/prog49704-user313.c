#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoi(char A,char C,char B,int n) {
    if(n==0)
        return;
    hanoi(A,B,C);
    if(A=='A' && C=='C') {
        c=c+1;
        move(A,B);
        move(B,C); }
    else {
        c=c+1;
        move(A,C); }
    hanoi(B,C,A); }
int main() {
    int n;
	scanf("%d",&n);
	hanoi('A','C','B',n);
	return 0; }
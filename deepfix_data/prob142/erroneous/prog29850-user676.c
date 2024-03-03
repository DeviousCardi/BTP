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
void honai_2(int n,char A,char B,char C) {
    if(n==0) {
        return; }
    honai_2(n-1,C,A,B);
    move(C,A); }
void honai_1(int n, char A,char B,char C) {
    if(n==0) {
        return ; }
    honai_1(n-1,A,B,C);
    move(A,B);
    honai_1(n-1,B,C,A);
    move(B,C);
    honai_2(n-1,C,A,B); }
int main() {
    int n;
    char A
    char B;
    char C;
    scanf("%d",&n);
    honai_1(n,A,B,C);
	return 0; }
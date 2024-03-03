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
void honai(int n, char A,char B,char C) {
    if(n==0) {
        return ; }
    else
    honai(n-1,A,B,C); }
int main() {
    int n;
    scanf("%d",&n);
	return 0; }
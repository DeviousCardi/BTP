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
void han(char A,char B,char C,int n){
    int k;
    if(k==n)
    move(A,B); }
int main() {
	int n;
	scanf("%d",&n);
	char A,B,C,;
	han(A,B,C,n);
	return 0; }
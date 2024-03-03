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
int main() {
	int N;
	scanf("%d",&N);
	if(N==1) {
	    root(N,'A','B','C');
	    root(N,'B','C','A'); }
	else
	   root(N,'A','B','C');
	return 0; }
void root(int N,char A,char B,char C) {
    if(N==1) {
        move(A,B); }
    else if(N!=0) {
        move(A,B); } }
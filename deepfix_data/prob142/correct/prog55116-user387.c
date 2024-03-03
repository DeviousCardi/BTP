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
h(char A,char B,char C) {
	    int i,N;
	    for(i=1;i<=N;i++){
	 if(i==1) {
	 move(A,B);
	 move(B,C); }
	 if(i==N-1) {
	 move(A,B);
	 move(B,C);
	 move(C,A); } } }
int main() {
    int N;
    char A,B,C;
    scanf("%d",&N);
	h(A,B,C);
	return 0; }
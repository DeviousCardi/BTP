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
void toi(int n,char A,char B,char C){
    if(n==1){
    move(A,B);
    move(B,C); }
    else {
        toi(n-1,A,B,C); } }
int main() {
    int N;
    char a,b,c;
    a='A';
    b='B';
    c='C';
   scanf("%d",&N);
   toi(N,a,b,c);
	return 0; }
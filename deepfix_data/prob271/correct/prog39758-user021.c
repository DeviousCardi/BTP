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
void hanoi(char a,char b,char c,int n){
    if(n==1){
        move(a,b);
        move(b,c); }
    else{
       hanoi(a,b,c,n-1);
       move(a,b);
       hanoi(c,b,a,n-1);
       move(b,c);
       hanoi(a,b,c,n-1); } }
int main() {
	char A,B,C;
	int N;
	scanf("%d",&N);
	hanoi(A,B,C,N);
	return 0; }
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
void hanoi(int n,char a,char b,char c){
    if(n==0){move(a,c);}
    else{
    hanoi(n-1,a,c,b);
    move(a,c);
    hanoi(n-1,b,a,c);} }
int main() {
    int m;char A='A',B='B',C='C';
	scanf("%d",&m);
	hanoi(m,A,B,C);
	return 0; }
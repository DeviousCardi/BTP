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
    if(n!=1){
        hanoi(n-1,a,b,c);
        hanoi(n-1,b,c,a);
        hanoi(1,a,b,c);
        hanoi(n-1,c,a,b);
        hanoi(n-1,a,b,c); }
    else if(n==1){
        move(a,c); } }
int main() {
	int n;
	char a='A',b='B',c='C';
	scanf("%d",&n);
	if(n>=1){
	    hanoi(n,a,b,c);
	    hanoi(n,b,c,a); }
	return 0; }
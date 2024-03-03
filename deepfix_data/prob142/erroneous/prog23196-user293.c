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
void hanoi(int n,char a,char b,char c) {
    if(n>1) {
        hanoi(n-1,a,b,c);
        hanoi(n-1,b,c,a); }
    if(n==1) move(a,b);
    if(n>1){
    hanoi(c,a,b);
    hanoi(a,b,c); }
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	return 0; }
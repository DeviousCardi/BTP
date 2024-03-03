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
void hanoi(int n,char a,char c,char b){
    if(n==0)
    return;
    move(a,c);
    hanoi(n-1,a,b,c);
    move(c,a);
    hanoi(n-1,b,c,a);
    move(a,c); }
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n,'A','C','B');
	return 0; }
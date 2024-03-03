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
void tower_of_hanoi(int n,char a,char c,char b) {
    if (n==0) return;
    tower_of_hanoi(n-1,a,b,c);
    move(a,c);
    tower_of_hanoi(n-1,b,c,a); }
int main() {
	int n;
	scanf("%d",&n);
	tower_of_hanoi(n,'a','c','b');
	return 0; }
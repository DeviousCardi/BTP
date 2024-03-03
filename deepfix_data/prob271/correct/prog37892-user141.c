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
    if (n<=0) return;
    tower_of_hanoi(n-1,a,c,b);
    move(a,b);
    move(b,c);
    tower_of_hanoi(n-1,a,c,b); }
int main() {
	int n;
	scanf("%d",&n);
	tower_of_hanoi(n,'A','C','B');
	return 0; }
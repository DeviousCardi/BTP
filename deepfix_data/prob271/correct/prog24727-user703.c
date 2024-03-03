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
void hanoi(char from, char to,int n){
    if(n==1) return;
    hanoi('A','B',n-1);
    hanoi('B','C',n-1);
    move('A','B');
    hanoi('C','A',n-1);
    move('B','C');
    hanoi('A','B',n-1);
    hanoi('B','C',n-1);
    return; }
int main() {
	int n;
	scanf("%d",&n);
	hanoi('A','C', n);
	return 0; }
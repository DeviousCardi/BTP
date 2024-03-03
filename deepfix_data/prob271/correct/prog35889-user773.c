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
void hanoi (int n , char via, char src, char dest){
    hanoi(n-1,dest, src, via);
    printf("Move from %c to %c", src, dest);
    hanoi(n-1,src, via, dest); }
int main() {
	int n;
	scanf("%d", &n);
	hanoi(n, 'B', 'A', 'C');
	return 0; }
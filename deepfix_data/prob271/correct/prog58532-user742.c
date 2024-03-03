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
void hanoi(int n, char A, char B, char C)
{ if(n==1)
    { move(A, B);
      move(B, C);
      return; }
  hanoi(n-1, A, B, C);
  move(A, B);
  hanoi(n-1, C, B, A);
  move(B, C);
  hanoi(n-1, A, B, C); }
int main() {
	int n;
	char A = 'A', B = 'B', C = 'C';
	scanf("%d", &n);
	hanoi(n, A, B, C);
	return 0; }
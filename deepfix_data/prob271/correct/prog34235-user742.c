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
void hanoi2(int n, char x, char y, char z)
{ if(n==0) return;
  if(n==1)
    { move(x, z);
      return; }
  hanoi2(n-1, x, z, y);
  move(z, x);
  hanoi2(n-1, y, x, z); }
void hanoi(int n, char p, char q, char r)
{ if(n==0) return;
  if(n==1)
    { move(p, q);
      move(q, r);
      return; }
  hanoi(n-1, p, q, r);
  move(p, q);
  hanoi2(n-1, r, q, p);
  move(q, r);
  hanoi(n-1, p, q, r); }
int main() {
	int n;
	char A = 'A', B = 'B', C = 'C';
	scanf("%d", &n);
	hanoi(n, A, B, C);
	return 0; }
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
int main() {
  int n;
char A,B,C;
  scanf("%d",&n);
  if(n==0)
  return 0;
  else if(n==1)
  move(B,C);
	return 0; }
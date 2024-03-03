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
char hanoi(int n) {
    int a,b,c;
  if(n==1) {
      move('A','B');
      move('B','C'); }
  else if(n>1) {
      move('A','B');
      move('B','C');
      move('A','B');
      move('C','A');
      move('B','C');
      return hanoi((n-1)hanoi(n-2)); } }
int main() {
	int N;
	scanf("%d",&N);
	hanoi(N);
	return 0; }
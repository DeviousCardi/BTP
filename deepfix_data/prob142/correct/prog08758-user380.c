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
void hanoi(int a, char p, char q, char r) {
    if(a==0) return;
    if(a==1) {
      move(p,r);
      move(r,q);
      return; }
    return hanoi(a-1,p,r,q); }
int main() {
	int N;
	scanf("%d",&N);
	char x='A', y='C', z='B';
	hanoi(N,x,y,z);
	return 0; }
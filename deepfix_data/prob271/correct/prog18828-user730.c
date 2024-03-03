#include <stdio.h>
#include <stdlib.h>
char a='A',b='B',c='C';
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoi(int n) {
    if(n==1) {
           move(a,b);
           move(b,c); }
      else {
          hanoi(n-1);
          move(a,b);
          move(b,c); } }
int main() {
int n;
scanf("%d",&n);
if(n==0)
{}
else {
    hanoi(n); }
	return 0; }
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
void hanoi(int n,char A,char B,char C) {
    if(n==1) {
           if(A=='A') {
           move(A,B);
           move(B,C); }
           else {
               move(A,C); } }
      else {
          hanoi(n-1,A,C,B);
          move(A,B);
          hanoi(n-1,C,A,B);
          move(B,C);
          hanoi(n-1,A,C,B); } }
int main() {
int n;
scanf("%d",&n);
if(n==0)
{}
else {
    hanoi(n,a,b,c); }
	return 0; }
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
void hanoi(int n,char A,char C,char B) {
    if(n==1) {
           if((A=='A')&&(C=='C')) {
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
char A='A',B='B',C='C';
if(n==0)
{}
else {
    hanoi(n,A,C,B); }
	return 0; }
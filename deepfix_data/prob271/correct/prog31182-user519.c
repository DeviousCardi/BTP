#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char A,char B, char C) {
  if(n==0)
  return;
  else if(n==1) {
      if(A=='A'&& C=='C') {
          move(A,B);
          move(B,C); }
      else {
          move(A,C); } }
  else {
  hanoi(n-1,A,C,B);
  hanoi(n-1,B,A,C);
   hanoi(n-1,B,A,C);
   hanoi(n-1,B,A,C); } }
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
int n ;
scanf("%d",&n);
char I='A';
char J='B';
char K ='C';
hanoi(n,I,J,K);
return 0; }
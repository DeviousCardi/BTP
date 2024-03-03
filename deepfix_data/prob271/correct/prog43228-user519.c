#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char a,char b, char c) {
  if(n==0)
  return;
  else if(n==1) {
      if(a=='a'&& c=='c') {
          move(a,b);
          move(b,c); }
      else {
          move(a,c); } }
  else {
  hanoi(n-1,a,c,b);
  hanoi(n-1,b,a,c);
   hanoi(n-1,b,a,c);
   hanoi(n-1,b,a,c); } }
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
char x='a';
char y='b';
char z ='c';
hanoi(n,x,y,z);
return 0; }
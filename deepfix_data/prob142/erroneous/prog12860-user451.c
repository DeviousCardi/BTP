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
void disc(char A,char B,char C,int n){
    if(n==1){
        move(A,B);
        move(B,C); }
    else if(n==2){
      move(A,B);
      move(B,C) } }
int main() {
int n;
scanf("%d",&n);
	return 0; }
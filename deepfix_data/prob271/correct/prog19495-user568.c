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
void Hanoi(int n,char A,char B,char C){
    if(n!=0){
      if(n==1){
        move(A,B);
        move(B,C); }
      else{
        Hanoi(n-1,A,B,C);
        move(A,B);
        move(C,A);
        move(B,C);
        Hanoi(n-1,A,B,C); } } }
int main() {
	int n;
	char A='A',B='B',C='C';
	scanf("%d",&n);
	Hanoi(n,A,B,C);
	return 0; }
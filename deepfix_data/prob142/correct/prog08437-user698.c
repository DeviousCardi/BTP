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
void hanoi(int n,char From,char Aux,char To)
 { if(n==1) { move(From,Aux);move(Aux,To); return;} }
int main() {
    int n;char A='A',B='B',C='C';
    scanf("%d",&n);
    if(n==0)return 0;
    hanoi(n,A,B,C);
	return 0; }
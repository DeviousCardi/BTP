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
void hanoi2(int n,char a,char b,char c){
    if(n==1){move(a,c);}
    else if(n>1){
        move(a,b);
        hanoi(n-1,c,a,b);
        move(b,c); } }
void hanoi(int n,char a,char b,char c){
    if(n==1){move(a,b);move(b,c);}
    else if(n>1){
    hanoi(n-1,a,b,c);
    move(a,b);
    hanoi2(n-1,c,b,a);
    move(b,c);
    hanoi(n-1,a,b,c);} }
int main() {
    int m;char A='A',B='B',C='C';
	scanf("%d",&m);
	hanoi(m,A,B,C);
	return 0; }
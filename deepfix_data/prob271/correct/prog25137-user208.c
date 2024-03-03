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
void hanoi(int n,char a,char b,char c){
    if(n==0)
    return;
    else if(n==1){
        move(a,b);
        move(b,c); }
        else{
            move(a,b);
            move(b,c);
            move(c,a); }
    hanoi(n-1,c,b,a); }
int main() {
	int N;
	char A='A',B='B',C='C';
	scanf("%d",&N);
	hanoi(N,A,B,C);
	return 0; }
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
void all_moves(int n,char A,char B,char ){
    if(n==0){
        return ; }
    else if(n==1){
        move(A,B);
        move(B,C);
        return; }
    else{
        all_moves(n-1,A,B,C); } }
int main() {
	int n;
	char A,B,C;
	scanf("%d",&n);
	all_moves(n,A,B,C);
	return 0; }
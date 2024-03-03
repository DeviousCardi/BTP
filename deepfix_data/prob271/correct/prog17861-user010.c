#include <stdio.h>
#include <stdlib.h>
char A,B,C;
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoi(int n,char A,char B,char C){
    if(n==0){
        return; }
    if(n==1){
        move(A,B);
        move(B,C); }
    else{
        hanoi(n-1,A,B,C);
        hanoi(n-1,C,B,A); } }
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n,A,B,C);
	return 0; }
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
void move_for(int n){
    if(n==1){
        move(A,B);
        move(B,C); }
    else{
        move_for(n-1); } }
int main() {
    int N;
	scanf("%d",&N);
	if(N==0){
	    return 0; }
    move_for(N);
	return 0; }
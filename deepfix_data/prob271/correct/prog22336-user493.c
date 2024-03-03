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
void move2(int n){
    if(n==0){
        return; }
    if(n==1){
        move('A','B');
        move('B','C'); }
    else
    move2(n-1); }
int main() {
	int n,i;
	scanf("%d",&n);
	move2(n);
	return 0; }
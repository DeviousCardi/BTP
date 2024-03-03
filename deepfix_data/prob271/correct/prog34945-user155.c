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
void hanoi(int n){
    int i;
    if(n==0) return;
    if(n==1){
        move('A','B');
        move('B','C'); }
    hanoi(n-1);
    move('A','B');
    for(i=0;i<(2*n)-3;i++){
        move('B'+1+i,'B'-1-i); }
    move('B','C');
    hanoi(n-1); }
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n);
	return 0; }
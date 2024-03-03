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
        move('B','C');
        return; }
    hanoi(n-1);
    move('A','B');
    if(n%2!=0) n=n+1;
    for(i=-(n/2)+1;i<(n/2);i++){ }
    move('B','C');
    hanoi(n-1); }
int main() {
	int n;
	scanf("%d",&n);
	hanoi(n);
	return 0; }
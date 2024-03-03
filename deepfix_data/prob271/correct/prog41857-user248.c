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
int main() {
	int N,i;
	scanf("%d",&N);
	if(N==0) {
	    return 0; }
	for(i=0;i<N-1;i++) {
	    move('A','B');
	    move('B','C'); }
	move('A','B');
	for(i=0;i<N-1;i++) {
	    move('C','A'); }
	move('B','C');
	for(i=0;i<N;i++) {
	    move('A','B');
	    move('B','C'); }
	return 0; }
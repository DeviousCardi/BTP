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
void hanoi(int discs, char from, char to) {
    if(discs==1) {
        if(from=='A'&&to=='C') {
            move('A','B');
            move('B','C');
            return; }
        else {
            move(from,to);
            return; } }
    else {
        hanoi(discs-1,from,to);
        move(from,'B');
        hanoi(discs-1,to,from);
        move('B',to);
        hanoi(discs-1,from,to);
        return; } }
int main() {
	int discs;
	scanf("%d",&discs);
	hanoi(discs,'A','C');
	return 0; }
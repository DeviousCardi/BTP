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
void Hanoi(int n, char From, char To); {
    if(n==1) {
        move('A','B');
        move('B','C'); }
    else {
        Hanoi(n-1);
        move('A','B');
        Hanoi(n-1,'C','A');
        move('B','C');
        Hanoi(n-1); } }
int main() {
    int n;
    scanf("%d",&n);
    Hanoi(n);
	return 0; }
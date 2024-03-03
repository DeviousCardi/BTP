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
void Hanoi(int n) {
    if(n==1) {
        move('A','B'); }
    else {
        Hanoi(n-1); }
    move('B','C'); }
int main() {
    int n;
    scanf("%d",&n);
    Hanoi(n);
	return 0; }
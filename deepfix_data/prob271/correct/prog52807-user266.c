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
void reverseMove(int n) {
    if(n==1) {
        move('C','A');
        return; }
    else if(n>1) {
        reverseMove(n-1);
        move('C','A');
        reverseMove(n-1); } }
void printMove(int n) {
    if(n==1) {
        move('A','B');
        move('B','C'); }
    else if(n>1) {
        printMove(n-1);
        move('A','B');
       reverseMove(n-1);
        move('B','C'); } }
int main() {
    int N;
    scanf("%d\n",&N);
    if(N)
        printMove(N);
	return 0; }
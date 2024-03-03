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
void step1(int);
void step2 (int n) {
    if (n==0);
    else {
        step2(n-1);
        move('A','B');
        step1(n-1);
        move('B','C');
        step2(n-1); } }
void step1 (int n) {
    if (n==0);
    else {
        step2(n-1);
        move('C','A');
        step2(n-1); } }
int main() {
    int n;
    scanf ("%d",&n);
    step2(n);
	return 0; }
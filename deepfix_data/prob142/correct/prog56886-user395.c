#include <stdio.h>
#include <stdlib.h>
void fun(int n) {
    if(n==1) {
        move('A','B');
        move('B','C'); }
    else {
        move('A','B');
        move('B','C');
        move('A','B');
        move('C','A');
        move('B','C');
        move('A','B');
        move('B','c'); } }
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
	int n;
	scanf("%d",&n);
	char A,B,C;
	if(n==0)return 0;
	fun(n);
	return 0; }
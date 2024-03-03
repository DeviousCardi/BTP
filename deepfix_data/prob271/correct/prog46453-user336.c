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
void abc(int n) {
    while(n!=0) {
    if(n==1) {
        move('A','B');
        move('B','C'); }
     else if(n>1) {
         move('A','B');
         move('B','C');
         while(n!=1) {
           move('A','B');
           move('C','A');
           move('B','C');
           n--; } }
     n--; } }
int main() {
	int n;
	scanf("%d",&n);
	abc(n);
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int tower(int n,char a,char b,char c) {
    if(n>0) { } }
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
	return 0; }
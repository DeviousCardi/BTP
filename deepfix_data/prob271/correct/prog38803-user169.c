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
    void Thn(int n);
    int n,i,steps;
    scanf("%d",&n);
  Thn(n);
	return 0; }
void Thn(int n) { }
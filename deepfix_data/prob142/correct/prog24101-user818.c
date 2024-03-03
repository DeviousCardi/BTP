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
    int num = 0;
    char From,To;
    int NumPerLine = 8;
    scanf("%d",&num);
    if (num== 0) {
    printf("\n%5d: ", num); }
    else {
    printf(" "); }
    printf("%c->%c", From, To);
    num++;
	return 0; }
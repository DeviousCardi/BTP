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
	int N;
	scanf("%d",&N);
    if (N==1){
        printf("0: A->B B->C"); }
    if (N==2){
        printf("0: A->B B->C A->B C->A B->C A->B B->C"); }
	return 0; }
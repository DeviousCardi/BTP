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
int han(int n){
    if(n==0)
    return 0;
    else
    return 3*han(n-1)+3-n; }
int main() {
    int N,k=0,num=0;
    char A,B;
    scanf("%d",&N);
    k=han(N);
    move(A,B);{
    if(num>k) }
	return 0; }
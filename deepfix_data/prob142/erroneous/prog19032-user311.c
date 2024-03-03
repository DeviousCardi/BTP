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
    int n;
    scanf("%d",&n);
	return 0; }
void hanoi(int n){
    if(n==0)
    return;
    if(n==1) {
        move(A,b); move(B,C);
        return; }
    else {
            hanoi(n-1);
            hanoi (n-1); } }
movemaker(int i){
    if(i==0) return; }
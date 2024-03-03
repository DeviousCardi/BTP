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
void solve(int N) {
    char A='A',B='B',C='C';
    if(N==0)
        return;
    else if(N==1) {
            move(A,B);
            move(B,C); }
    else {
        move(A,B);
        move(B,C);
        move(A,B);
        move(C,A);
        move(B,C);
        return solve(N-1); } }
int main() {
    int N;
    scanf("%d",&N);
    solve(N);
	return 0; }
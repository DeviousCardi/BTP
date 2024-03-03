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
void tower(int n, char A, char B, char C) {
    if(A=='A'&& C== 'C'){
        if(n==1){
            move(A, B);
            move(B, C);
            return; }
        else {
            tower(n-1, A, B, C);
            move(A, B);
            tower(n-1, C, B, A);
            move(B,C);
            tower(n-1,A, B, C); } }
    else {
        if(n==1) {
            move(A, C);
            return; }
        else {
            tower(n-1, A, C, B);
            move(A, C);
            tower(n-1, B, A, C); } } }
int main() {
    int n ;
    scanf("%d", &n);
    if(n==0)
        return 0;
	tower(n,'A', 'B', 'C');
	return 0; }
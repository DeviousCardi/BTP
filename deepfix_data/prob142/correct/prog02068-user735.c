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
    int N, a, b=0, c=0;
    char A='A', B='B', C='C';
    scanf("%d", &N);
    a=N;
    while(a!=0 ){
        if(a!=0 && b==0){
            move(A, B);
            b++;
            a--; }
        if(b!=0 && c==0){
            move(B, C);
            b--;
            c++; }
        if(a!=0 && b!=0 && c!=0){
            move(C, A);
            c--;
            a++; } }
	return 0; }
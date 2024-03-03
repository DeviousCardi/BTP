#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void honai_2(int n,char A,char B,char C) {
    if(n==0) {
        return; } }
void honai_1(int n, char X,char Y,char Z) {
    if(n==0) {
        return ; }
    move(X,Y); }
int main() {
    int n;
    char A,B,C;
    scanf("%d",&n);
    honai_1(n,A,B,C);
	return 0; }
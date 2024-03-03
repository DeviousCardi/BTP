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
void movements(int n,char P,char Q) {
    if(n==1) {
        if(P=='A'&&Q=='C') {
            move(A,B);
            move(B,C); }
        else {
            move(P,Q); } }
    if(n>1) {
        if(P=='A'&&Q=='C') {
            movements(n-1,A,C);
            movements(1,A,B);
            movements(n-1,C,A);
            movements(1,B,C);
            movements(n-1,A,C); } } }
int main() {
	return 0; }
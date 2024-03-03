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
void hano(int n,char f,char t) {
    if(n==1) {
        move(f,'B');
        move('B',t);
        return; }
    if(f=='A') {
        hano(n-1,f,t);
        move(f,'B');
        hano(n-1,t,f);
        move('B',t); }
    else {
        hano(n-1,'C','B');
        move('C','A');
        hano(n-1,'B','A'); } }
int main() {
    int n;
	scanf("%d",&n);
	if(n==0) {
	printf("\n");
	return 0; }
	hano(n,'A','C');
	return 0; }
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
void hano(int n,char f,char t,char u) {
    if(n==1) {
        if(t=='B')
        move(f,t);
        else if(f=='A') {
            move(f,'B');
            move('B',t); }
        else
        move(f,t);
        return; }
    if(f=='A') {
        hano(n-1,f,t,u);
        move('A','B');
        hano(n-1,t,f,u);
        move('B','C'); }
    else {
        hano(n-1,f,u,t);
        move(f,t);
        hano(n-1,u,t,f); } }
int main() {
    int n;
	scanf("%d",&n);
	if(n==0) {
	printf("\n");
	return 0; }
	hano(n,'A','C','B');
	return 0; }
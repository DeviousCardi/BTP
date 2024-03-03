#include <stdio.h>
#include <stdlib.h>
void move(char From, char To) {
    if(From=='A'&& To=='C'){
        move('A','B');
        move('B','C'); }
    else {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; } }
void rec(int i,char p, char q, char r);
void recurse(int k, char a, char b,char c){
    if(k>0){
        rec(k,a,c,b); } }
void rec(int i,char p, char q,char r){
    if(i==0){
        return; }
    recurse(i-1,p,q,r);
    move(p,r);
    recurse(i-1,q,r,p); }
int main() {
	int n;
	scanf("%d",&n);
	rec(n,'A','B','C');
	return 0; }
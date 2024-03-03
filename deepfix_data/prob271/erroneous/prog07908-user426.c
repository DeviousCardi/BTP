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
void movehanoi(int m,char from ,char to,char bet){
    if(m==1){
        move(from,to);
        return; }
    movehanoi(m-1,from,bet,to);
    move(form,to);
    move(m-1,bet,to,from); }
void movestack(int m,char from,char to ){
    if(m==1){
        move('a','b');
        move('b','c');
        return; }
    movestack(n-1,from,to);
	move(from,'b');
	movehanoi(n-1,to,from);
	move('b',to);
	movestack(n-1,from,to); }
int main() {
	int n;
	scanf("%d",&n);
	movestack(n,'a','c');
	return 0; }
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
void movenormal(int m,char from ,char to,char bet){
    if(m==1){
        move(from,to);
        return; }
    movenormal(m-1,from,bet,to);
    move(from,to);
    movenormal(m-1,bet,to,from); }
void moverest(int m,char from,char to,char bet ){
    if(m==1){
        move('A','B');
        move('B','C');
        return; }
    moverest(m-1,from,to,bet);
	move(from,'B');
	movenormal(m-1,to,from,bet);
	move('B',to);
	moverest(m-1,from,to,bet); }
int main() {
	int n;
	scanf("%d",&n);
	if(n<=0)
	return 0;
	moverest(n,'A','C','B');
	return 0; }
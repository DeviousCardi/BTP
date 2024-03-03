#include <stdio.h>
#include <stdlib.h>
char a='A',b='B',c='C';
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void reversemove(char from,char to){
    move(to,from); }
void moveit(int n,int d){
    if(n==0){
        return; }
    if(n==1){
        move(a,b);
        if(d>1&&d<3){
            move(c,a);}
            else if(d>2){
                reversemove(b,c);
                if(d>1){
                    move(c,a); }
                reversemove(a,b); }
        move(b,c);
        return; }
    moveit(n-1,d-1);
    moveit(n-1,d-1); }
int main() {
	int n;
	scanf("%d",&n);
	moveit(n,n);
	return 0; }
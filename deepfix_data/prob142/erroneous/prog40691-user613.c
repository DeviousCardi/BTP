#include <stdio.h>
#include <stdlib.h>
char a,b,c;
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
int hanoi(n,start,temp,target){
    hanoi(n-1,start,target,temp);
    printf("%c->%c",start,target);
    hanoi(n-1,temp,start,target); }
int main() {
    a='a';
    b='b';
    c='c';
    char start,temp,target;
    start='a';
    temp='b';
    target='c';
    hanoi(n,start,temp,target);
	return 0; }
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
    if(n<1){
        return 0; }
    hanoi(n-1,start,temp,target);
    move(start,temp);
    hanoi(n-1,temp,target,start);
    move(temp,target);
    return 0; }
int main() {
    a='a';
    b='b';
    c='c';
    int n;
    scanf("%d",&n);
    char start,temp,target;
    start='A';
    temp='B';
    target='C';
    hanoi(n,start,temp,target);
	return 0; }
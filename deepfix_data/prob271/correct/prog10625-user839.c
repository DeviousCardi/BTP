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
void hanoi(int n,char from,char by,char to) {
        if(n==0)
            return;
        else if(n==1) {
               move(from,by);
               move(by,to);
               return; }
        else if(n==2) {
                hanoi(1,from,by,to);
                move(from,by);
                move(to,from);
                move(by,to);
                hanoi(1,from,by,to);
                return; }
        return hanoi(n-1,from,by,to); }
int main() {
    int n;
    scanf("%d",&n);
    hanoi(n,'A','B','C');
	return 0; }
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
void hanoi(int n,char a,char c) {
    if(n==0)
        return;
    if(n==1) {
            move(a,'B');
            move('B',c); }
    else {
            hanoi(n-1,a,'B');
            hanoi(n-1,'B',c);
            move(a,'B');
            hanoi(n-1,c,a);
            move('B',c); } }
int main() {
    int n;
    char a='A',c='C',b='B';
    scanf("%d",&n);
    hanoi(n,a,c);
	return 0; }
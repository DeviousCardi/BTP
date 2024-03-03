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
void hanoi(int n, char s, char d, char a) {
    if(n<1)
        return;
    if(n==1) {
        int i=s-65, j-65;
        for(;i!=j;i=(i+1)%3)
            move(i+65,(i+1)%3+65);
        return; }
    hanoi(n-1,s,d,a);
    printf("1");
    move(s,a);
    hanoi(n-1,d,s,a);
    printf("2");
    move(a,d);
    hanoi(n-1,s,d,a);
    return; }
int main() {
    int N;
    scanf("%d",&N);
	hanoi(N,'A','C','B');
	return 0; }
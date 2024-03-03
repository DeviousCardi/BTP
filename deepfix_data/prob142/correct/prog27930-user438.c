#include <stdio.h>
#include <stdlib.h>
void move(char a, char c) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c",a,c);
    num++; }
void hanoi(int n,char a,char c,char b) {
    if(n==0)
    return;
    else {
     hanoi(n-1,a,b,c); {
        printf("move %d disk from %c to %c\n",n,a,c); }
    hanoi(n-1,b,c,a); } }
int main() {
    char a='A',b='B',c='C';
    int n;
    scanf("%d",&n);
    hanoi(n,a,c,b);
	return 0; }
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
void hanoi(int n,char s, char d, char temp) {
    if(n==1) {
        move(s,temp);
        move(temp,d); }
     if(n>1) {
        hanoi(n-1,s,d,temp);
        move(s,temp);
        hanoi(n-1,d,s,temp);
        move(temp,d);
        hanoi(n-1,s,d,temp); } }
int main() {
	int n;
	char source='A',des='C',temp='B';
	scanf("%d",&n);
	hanoi(n,source,des,temp);
	return 0; }
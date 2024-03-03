#include <stdio.h>
#include <stdlib.h>
char source='A',temp='B',dest='C';
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoi(int n,char source,char temp,char dest,int sourcepos,int temppos,int destpos) {
    if(n==1) {
        if(sourcepos-destpos==-1 || sourcepos-destpos==2)
        move(source,dest);
        else
        move(source,temp);
        move(temp,dest); }
    else {
    hanoi(1,source,temp,dest,1,2,3);
    hanoi(n-1,source,temp,dest,1,3,2);
    hanoi(1,dest,temp,source,3,2,1);
    hanoi(n-1,temp,dest,source,2,3,1);
    hanoi(1,source,temp,dest,1,2,3); } }
int main() {
    int n;
    scanf("%d",&n);
    hanoi(n,source,temp,dest,1,2,3);
	return 0; }
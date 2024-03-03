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
void hanoi(int n,char source,char temp,char dest,int sourcepos,int temppos,int destpos) {
    if(n==0)
    return;
    if(n==1) {
    if(sourcepos-destpos==-1|| sourcepos-destpos==2) {
        move(source,dest); }
    else {
        move(source,temp);
        move(temp,dest); } }
    else {
    hanoi(1,source,temp,dest,sourcepos,temppos,destpos);
    hanoi(n-1,source,dest,temp,sourcepos,destpos,temppos);
    hanoi(1,dest,temp,source,destpos,temppos,sourcepos);
    hanoi(n-1,temp,source,dest,temppos,sourcepos,destpos);
    hanoi(1,source,temp,dest,sourcepos,temppos,destpos); } }
int main() {
    int n;
    scanf("%d",&n);
    hanoi(n,'A','B','C',1,2,3);
	return 0; }
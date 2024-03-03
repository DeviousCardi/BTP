#include <stdio.h>
#include <stdlib.h>
void MOVE(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void DO(int n,char a,char c,char b){
if(n-1>=0){
DO(n-1,a,b,c);
DO(n-1,b,c,a);}
MOVE(a,b);
if(n-1>=0){
DO(n-1,c,a,b);}
MOVE(b,c);
if(n-1>=0){
DO(n-1,a,b,c);
DO(n-1,b,c,a);}}
int main() {
    int n;
    scanf("%d",&n);
    DO(n,'a','b','c');
	return 0; }
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
void fat(int,char,char,char);
void fta(int n,char from,char to,char aux){
    if(n==0)  return;
    fat(n-1,from,aux,to);
    move(from,to);
    fat(n-1,aux,to,from);
    return; }
void fat(int n,char from,char to,char aux){
    if(n==0)  return;
    fat(n-1,from,to,aux);
    move(from,aux);
    fta(n-1,to,from,aux);
    move(aux,to);
    fat(n-1,from,to,aux);
    return; }
int main() {
	int n;
	scanf("%d",&n);
	fta(n,'A','C','B');
	return 0; }
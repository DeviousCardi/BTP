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
void hanoi(char from, char to,char using, int n){
    if(n==0)return;
    if(from=='A'&&to=='C'){
        if(n==1){
        if(from=='A'&&to=='C'){
           move(from,using);
           move(using,to); }
       else
       move(from,to);
       return; }
    hanoi(from,using,to,n-1);
    hanoi(using,to,from,n-1);
    move(from,using);
    hanoi(to,from,using,n-1);
    move(using,to);
    hanoi(from,using,to,n-1);
    hanoi(using,to,from,n-1);}
    else{
        hanoi(from,using,to,n-1);
        move(from,to);
        hanoi(using,to,from,n-1); }
    return; }
int main() {
	int n;
	scanf("%d",&n);
	hanoi('A','C','B', n);
	return 0; }
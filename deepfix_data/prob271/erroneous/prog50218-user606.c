#include <stdio.h>
#include <stdlib.h>
char a='A',b='B',c='C';
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoi(int n,char from,char to,char aux){
    if(n==1){
        if(from=='A'&& to=='C'){move(from,aux);move(aux,to);
        else move(from,aux);
        return; }
    hanoi(n-1,from,to,aux);
     move(from,aux);
    hanoi(n-1,to,from,aux);
    move(aux,to);
    hanoi(n-1,from,to,aux); }
int main() {
    int n;
    scanf("%d",&n);
    hanoi(n,a,b,c);
	return 0; }
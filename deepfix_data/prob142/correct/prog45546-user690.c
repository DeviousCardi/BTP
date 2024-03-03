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
void hanoi(int num,char from,char to,char aux){
    if (num==1){
        move(from,aux);
        move(aux,to); }
   else{
   hanoi (num-1,from,aux,to);
    move(from,aux);
    move(aux,to);
   hanoi(num-1,aux,from,to); } }
int main() {
	int n;
	scanf("%d",&n);
	char A='A',B='B',C='C';
	hanoi(n,A,C,B);
	return 0; }
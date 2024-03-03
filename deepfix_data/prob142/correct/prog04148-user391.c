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
void tower(n,from,to,via){
    if(n==1){
       move('A','B');
       move('B','C');
       return; }
    if(n==2){ }
    tower(n-1,from,via,to);
    move(from,to);
    tower(n-1,via,to,from); }
int main() {
	int n;
	scanf("%d",&n);
	if(n==0)
	   return 0;
	char from='A';
	char to='C';
	char via='B';
	tower(n,from,to,via);
	return 0; }
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
       printf("Disc 1 from %c to %c",from,to);
       return; }
    tower(n-1,from,via,to);
    printf("Move disc %d from %c to %c",n,from,to);
    tower(n-1,via,to,from); }
int main() {
	int n;
	scanf("%d",&n);
	char from='A';
	char to='C';
	char via='B';
	tower(n,from,to,via);
	return 0; }
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
    if(from=='A'&&to=='C'){
        tower(n,'B','C','A'); }
    if(from=='B'&&to=='A'){
        tower(n,'C','B','A'); }
    if(from=='C'&&to=='B'){
        tower(n,'A','B','C'); }
    if(n==1){
       move(from,to);
       return; }
    tower(n-1,from,via,to);
    move(from,to);
    tower(n-1,via,to,from); }
int main() {
	int n;
	scanf("%d",&n);
	char from='A';
	char to='C';
	char via='B';
	tower(n,from,to,via);
	return 0; }
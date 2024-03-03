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
void move_disc(int n){
    if(n==1){
        move('A','B');
        move('B','C'); }
    else{
        move_disc(n-1);
        move_disc(n-1); } }
int main() {
    int n;
    scanf("%d",&n);
    if(n==0){
        printf(" "); }
    else{
        move_disc(n); }
	return 0; }
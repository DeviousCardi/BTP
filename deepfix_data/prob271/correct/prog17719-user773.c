#include <stdio.h>
#include <stdlib.h>
void hanoihelper(int ,char ,char, char);
void hanoi(int ,char, char ,char);
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
void hanoihelper(int n, char via, char src, char dest){
    if(n==0) return;
    hanoi(n-1, dest, src, via);
    move(src, dest);
    hanoi(n-1, src, via, dest); }
void hanoi (int n , char via, char src, char dest){
    if(n==0) return ;
    hanoi(n-1,dest, src, via);
    move(src, dest);
    hanoi(n-1,src,dest, via);
    move(src, dest);
    hanoi(n-1,src, via, dest); }
int main() {
	int n;
	scanf("%d", &n);
	hanoi(n, 'B', 'A', 'C');
	return 0; }
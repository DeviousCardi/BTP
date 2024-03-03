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
int i,j,k;
void hanoi(int n,char A,char B,char C) {
    if(n!=0)
    {  if(k!=0)
        {hanoi(n-1,'B','A','C');i++;k--;move('A','B');}
        if(i!=0)
        {hanoi(n-1,'A','C','B');i--;j++;move('B','C');}
        if(k!=0&&i==0)
        {hanoi(n-1,'B','A','C');i++;k--;move('A','B');}
        if(k!=0&&j!=0&&i!=0)
        {hanoi(n-1,'C','B','A');j--;k++;move('C','A');} }
int main() {
	int n;i=0;j=0;
	scanf("%d",&n);k=n;
	hanoi(n,'A','B','C');
	return 0; }
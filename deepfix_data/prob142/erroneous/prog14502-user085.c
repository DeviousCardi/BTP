#include <stdio.h>
#include <stdlib.h>
 void hanoi(int n) {
     if(n==1) {
         move(str[0],str[1]);
         printf(" ");
         move(str[1],str[2]); }
     else {
         hanoi((n-1));
         move(str[0],str[1]);
         move(str[2],str[0]);
         move(str[1],str[2]); } }
void move(char From, char To) {
    const int NumPerLine = 8;
    static int num = 0;
    if (num%NumPerLine == 0) {
        printf("\n%5d: ", num); }
    else {
        printf(" "); }
    printf("%c->%c", From, To);
    num++; }
int main() {
	int n;
	scanf("%d",&n);
	if(n==0)
	return 0;
	else {
	    char str[3];
	    int i;
	    for(i=0;i<3;i++)
	    str[i]=i+65;
	    hanoi(n);
return 0;
}}
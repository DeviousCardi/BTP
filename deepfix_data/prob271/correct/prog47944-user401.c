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
int main() {
	int n,i;
   char A,B,C;
	int a[100] ,b[100] ,c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    a[i]=i+1;
	    b[i]=0;
	    c[i]=0; }
	for(i=0;i<n;i++){
	    if(a[i]>b[i]){
	        b[i]=a[i];
	        a[i]=0;
	        A=a[i];
	        B=b[i];
	        move(A,B); }
	    else
	    if(a[i]<b[i]){
	    b[i]=a[i];
	    a[i]=0;
	    B=b[i];A=a[i];
	    move(A,B); } }
	return 0; }
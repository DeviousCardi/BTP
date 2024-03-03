#include <stdio.h>
#include <stdlib.h>
int Hanoi(int n,char First,char Second,char Third){
    int c;
    if(n==1){
        c=1; }
    else{
        c=int Hanoi(int n-1,char Third,char Second,char First); }
    return c; }
int main() {
	int i,t;
	char A,B,C;
	scanf("%d",&t);
	int a[t],M[t];
	for(i=0;i<t;i++){
	    scanf("%d",&a[t]);
	    M[t]=int Hanoi(a[t],A,B,C);
	    printf("%d",M[t]); }
	return 0; }
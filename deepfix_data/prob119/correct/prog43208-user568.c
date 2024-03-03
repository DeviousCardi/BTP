#include <stdio.h>
#include <stdlib.h>
int Hanoi(int n,char First,char Second,char Third){
    int c;
    if(n==0){
        c=0; }
    else if(n==1){
        c=1; }
    else{
        c=Hanoi(n-1,Third,Second,First); }
    return c; }
int main() {
	int i,t;
	char A,B,C;
	scanf("%d",&t);
	int a[t],M[t];
	for(i=0;i<t;i++){
	    scanf("%d",&a[t]);
	    M[t]=Hanoi(a[t],A,B,C);
	    printf("%d\n",M[t]); }
	return 0; }
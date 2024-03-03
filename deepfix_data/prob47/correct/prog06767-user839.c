#include <stdio.h>
#include <stdlib.h>
int fact(int a) {
        if (a==1)
        return 1;
        else {
            return(a*fact(a-1)); } }
int cat(int a) {
        int p=0;
        if (a==1)
        return 1;
        else if(a==0) return 0;
        else {
        return ((4*a-2)*cat(a-1))/(a+1); } }
int main() {
	int t,i,y=0,j;
	scanf("%d",&t);
	int ar[t];
	for(i=0;i<t;i++) {
	        scanf("%d",&ar[i]); }
	for(i=0;i<t;i++) {
	        for (j=0;j<=ar[i];j++)
	        y=y+cat(j);
            printf("%d\n",y); }
	return 0; }
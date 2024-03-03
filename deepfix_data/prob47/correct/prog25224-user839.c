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
        return 0;
        else if(a==0) return 1;
        else {
        p=((4*a-2)*cat(a-1))/(a+1)+p;
            return p; } }
int main() {
	int t,i,y;
	scanf("%d",&t);
	int ar[t];
	for(i=0;i<t;i++) {
	        scanf("%d",&ar[i]); }
	for(i=0;i<t;i++) {
	        y=cat(ar[i]);
            printf("%d\n",y); }
	return 0; }
#include <stdio.h>
#include <stdlib.h>
int fact(int a) {
        if (a==1)
        return 1;
        else {
            return(a*fact(a-1)); } }
int cat(int a) {
        int p=1;
        p=(fact(2*a)/(fact(a)*fact(a)))/(a+1)+p;
        if (a-1==1)
        return p;
        else if(a==0) return 1;
        else return(cat(a-1)); }
int main() {
	int t,i;
	scanf("%d",&t);
	int ar[t];
	for(i=0;i<t;i++) {
	        scanf("%d",&ar[i]); }
	for(i=0;i<t;i++) {
            printf("%d",ar[i]); }
	return 0; }
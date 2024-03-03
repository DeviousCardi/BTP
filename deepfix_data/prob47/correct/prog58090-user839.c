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
        else if(a==0) return 1;
        else {
        p=(fact(2*a)/(fact(a)*fact(a)))/(a+1)+cat(a-1);
            return p; } }
int main() {
	int t,i,y;
	scanf("%d",&t);
	int ar[t];
	for(i=0;i<t;i++) {
	        scanf("%d",&ar[i]); }
	for(i=0;i<t;i++) {
	        y=cat(ar[i]);
            printf("%d",y); }
	return 0; }
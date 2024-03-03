#include <stdio.h>
#include <stdlib.h>
int ctln(int n) {
    int sum=0,i;
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else {
        for(i=0;i<n;i++) {
            sum=sum+ctln(i)*ctln(n-i-1); }
        return sum; } }
int main(){
    int n,i,arry[26],t,j;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
       scanf("%d",&arry[i]); }
    for(i=0;i<=t;i++) {
        n=0;
        for(j=0;j<200;j++) {
            if (arry[i]>ctln(j))
            {   n++;
                 break; } }
            if(n==1)
        printf("%d\n",ctln(j)); }
	return 0; }
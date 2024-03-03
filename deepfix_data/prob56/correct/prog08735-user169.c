#include <stdio.h>
#include <stdlib.h>
int main() {
    int catalan(int t);
    int n,i,t,k,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&t);
        if(k>0) {
            for(j=1;j<100;j++) {
                k=catalan(j);
                printf("%d\n",k);
                if(k>t)
                break; } }
        else
        printf("1"); }
	return 0; }
int catalan(int t) {
    int x,n,num,din;
   if(t==0)
   return 1;
   else
   {   num=2*((2*t)-1);
       din=t+1;
       x=catalan(t-1);
       n=num*x/din;
    return n; } }
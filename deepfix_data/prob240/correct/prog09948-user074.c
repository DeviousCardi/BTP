#include <stdio.h>
#include <stdlib.h>
int cat(double k)
    {    int num,a;
        if(k==0 || k==-1)
          return 1;
        while (a<k)
         {  for(num=0;num<10000;num++) {
                a=cat(num-1)*(2*(2*num-1)/(num+1)); } }
         return a; }
int main() {
	int i,j,t;
	double k;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	        scanf("%lf\n",&k);
	        j=cat(k);
	        printf("%d\n",cat(k-1)); }
	return 0; }
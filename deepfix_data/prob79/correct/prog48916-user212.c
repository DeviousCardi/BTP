#include <stdio.h>
#include <stdlib.h>
int main() { int n,i,ta,tb,c1,c2;
             ta=0; tb=0; c1=0; c2=0;
            int *p;
            scanf("%d",&n);
            p=(int*)malloc(n*sizeof(int));
            for(i=0;i<n;i++){
                scanf("%d",p+i); }
           for(i=0;i<n;i++){
               if(ta>=tb){
                   ta=p[i]; c1++;} }
	return 0; }
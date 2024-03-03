#include <stdio.h>
#include <stdlib.h>
#include<math.h>
       int moe(int n) {
           if(n==0)
           return 0;
           else return 2*moe(n-1)+1; }
    int main(){
        int i,t,k[100],n;
        scanf("%d",&t);
        for(i=0;i<t;i++) {
            scanf("%d",&k[i]);
            for(n=0;n<200;n++) { {
                    printf("%d",moe(k[i])); } } }
	return 0; }
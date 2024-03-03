#include <stdio.h>
int main() {
    int m,n,a,i,temp ,t,k,s=0,max=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                    scanf("%d",&k);
                    s=s+k; }
            if(s>max)
            max=s; }
printf("%d",max); }
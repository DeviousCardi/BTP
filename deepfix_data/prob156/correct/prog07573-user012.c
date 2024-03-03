#include <stdio.h>
int main() {
    int m,n,i,k,max=0,j;
    scanf("%d%d",&m,&n);
    for(i=0;i<n;i++)
        {int s=0;
            for(j=0;j<m;j++) {
                    scanf("%d",&k);
                    s=s+k; }
            if(s>max)
            max=s; }
printf("%d",max); }
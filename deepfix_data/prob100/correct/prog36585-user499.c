#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,L,a;
    int max;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
     { max=0;
       for(j=0;j<n;j++)
         {scanf("%d",&a);
           if(a>max) {
                max=a; } }
         L=max;
         if(max>L) {
            L=max; }
     } printf("%d",L);
    return 0; }
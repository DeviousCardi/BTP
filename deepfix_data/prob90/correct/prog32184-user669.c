#include <stdio.h>
int main(){
    int k,i,n,a[100],sum;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        {   sum=0;
            for(i=0;i<n;i++)
            {sum= a[i]+a[n-1];
            if(sum==k);
            printf("lucky"); } } }
     return 0; }
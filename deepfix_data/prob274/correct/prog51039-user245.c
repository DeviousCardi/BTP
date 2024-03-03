#include <stdio.h>
int main(){
    int a[10000],i,n,c=0,j,t=0,k=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<n;i++)
    {if(t==1)
    break;
    if(a[i]==1) {
        for(;i<(n+1);i++)
        {if(k==1) {
            break;
            t=1; }
            if(i==n)
            i=0;
           for(j=i+1;j!=i;j++) {
               c++;
                if(j==n)
            j=0;
            if(j!=i) {
                if(a[j]==a[i]) {
                    break;
                    k=1; } } } } } }
    printf("%d",c);
    return 0; }
#include <stdio.h>
int main(){
    int a[10000],i,n,c=0,j,t=0,k=0,p=0,m=0,;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<n;i++)
    {if(t==1)
    break;
    if(a[i]==1)
    {p=i;
        for(;i<(n+1);i++) {
            if(k==1)
        {  t=1;
            break;
        }c=0;
            if(i==n)
            i=0;
           for(j=p+1;j!=p;j++) {
               c++;
                if(j==n)
            j=0;
            if(j!=i) {
                if(a[j]==a[i])
                {k=1;
                    break; } } } } } }
    printf("%d",c);
    for(l=p;l!=i;l++) {
        if(l=n)
        l=0;
        m++; }
    return 0; }
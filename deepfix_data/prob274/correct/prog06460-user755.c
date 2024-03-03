#include <stdio.h>
int main(){
    int n,i,j,t=1,p,x;
    scanf("%d",&n);
    int arr[n+1];
    for(i=1;i<=n;i++) {
        scanf("%d",&arr[i]); }
    int an[n+1];
    for(i=0;i<n+1;i++)
        an[i]=0;
    an[1]=1;
    for(i=1;;) {
        j=arr[i];
        an[j]=an[j]+1;
        if(an[j]>1)
            break;
        i=j;
        t++; }
    p=j;
    x=t;
    printf("%d ",t);
    for(i=0;i<n+1;i++)
        an[i]=0;
    for(i=1,t=1;;) {
        j=arr[i];
        an[j]=an[j]+1;
        if(an[p]==1)
           break;
        i=j;
        t++; }
    printf("%d",x-t);
    return 0; }
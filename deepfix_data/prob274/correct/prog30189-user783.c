#include <stdio.h>
int main() {
    int n,i,t=0,a[1000],count=0,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<=n;i++) {
        i=a[i]-1;
        t=t+1;
        if(a[i]==a[1])
        count=count+1;
        if(count==2)
        {temp=t;
        break;} }
    printf("%d %d",temp,temp-1); }
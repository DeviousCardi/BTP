#include <stdio.h>
int main() {
    int i,n,a[200],count=0,t=0,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<=n;i++) {
       printf("%d ",a[i]);
        i=a[i]-1;
        t=t+1;
        if(a[i]==a[1])
        count=count+1;
        if(count==2)
        t=temp;
        if(count==3)
        break; }
    printf("\n%d %d",temp,t-temp);
        return 0; }
#include <stdio.h>
int main() {
    int n,i;
    int a[1000];
    int count1=0;
    int count2=0;
    int t=0;
    int s=0;
    int temp;
    int k;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<=n;i++) {
        i=a[i]-1;
        t=t+1;
        for(j=1;j<=n;j++) {
        if(a[i]==a[j])
        count1=count1+1;break;}
        if(count1==2)
        {temp=t;
        break;} }
    for(i=1;i<=n;i++) {
        i=a[i]-1;
        s=s+1;
        if(a[i]==a[1])
        count2=count2+1;
        if(count2==3)
        {k=s;
        break;} }
    printf("%d %d",temp,k-temp); }
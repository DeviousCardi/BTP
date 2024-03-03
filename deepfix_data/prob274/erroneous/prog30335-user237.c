#include <stdio.h>
int main(){
    int n,i,t=1,b[40];
    scanf("%d\n",n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<40;i++) {
        b[i]=t;
        t=a[t];
        for(j=0;j<i;j++)
        if(b[j]==t)
        {printf("%d %d",i-1,i-j);
        break;}
        else
        continue; }
    return 0; }
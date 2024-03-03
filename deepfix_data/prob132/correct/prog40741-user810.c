#include <stdio.h>
int main() {
int n,i,j,m=1,t,s=0;
scanf("%d",&n);
int a[n+1];
for(i=0;i<n;i++) {
        scanf("%d,",&a[i]); }
for(i=0;i<n;i++)
    {if(a[i]==t)
        continue;
        for(j=i+1;j<n;j++) {
                if(a[j]==a[i]) {
                m++;
                a[i]=t; } }
            printf("%d\n",m);
            if(m==a[i]) {
                s++; }
            m=0; }
    int max;
for(i=0;i<n;i++) {
        max=a[0];
        if(a[i]>max)
        max=a[i]; }
printf("%d %d",max,s);
return 0; }
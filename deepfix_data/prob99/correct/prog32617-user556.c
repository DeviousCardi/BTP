#include<stdio.h>
int main() {
    int n;int i,j,c=0,max=0,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    { c=0;
       t=a[i];
        for(j=i+1;j<n;j++) {
            if(a[j]>t)
            {t=a[j];
                c++; } }
        if(max<c)
        max=c; }
    printf("%d",max);
    return 0; }
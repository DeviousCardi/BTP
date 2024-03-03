#include<stdio.h>
int main() {
    int n;int i,j,c=1,max=1,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    { c=1;
       t=a[i];
        for(j=i+1;j<n;j++) {
            if(a[j]>t)
            {t=a[j];
                c++; } }
        if(max<c)
        max=c; }
    printf("%d",max);
    return 0; }
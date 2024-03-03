#include<stdio.h>
int m;
int max(int [],int);
int main() {
    int n,i,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    m=max(a,n-1);
    printf("%d",m);
    return 0; }
int max(int a[],int i) {
    if(i==0)
        return 1;
    int count,high=0;
    for(count=i-1;count>=0;count--)
        if(a[count]<a[i])
            if(high<(1+max(a,count)))
                high=1+max(a,count);
    if(high==0)
        return 1;
    return high; }
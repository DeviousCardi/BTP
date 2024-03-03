#include<stdio.h>
int n,arr[100]={0};
int getMaxLessThan(int upperLimit) {
    int m=arr[0],i;
    for(i=0;i<n;i++)
        if(m<arr[i]&&arr[i]<upperLimit)
            m=arr[i];
    for(i=0;i<n;i++)
        if(arr[i]==m)
            arr[i]=0;
    return m; }
int main() {
    int k,i;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int g=arr[0];
    for(i=0;i<n;i++)
        if(g<arr[i])
            g=arr[i];
    while(k!=0) {
        printf("%d\n",g);
        g=getMaxLessThan(g);
        k--; } }
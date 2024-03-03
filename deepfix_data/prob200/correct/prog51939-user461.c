#include <stdio.h>
#include<limits.h>
int a[100]={0};
int n;int k;
int getMaxLessThan(int upperLimit) {
    int temp=a[0];
    for(int i=1;i<n;++i) {
        if(temp<a[i] && a[i]<upperLimit)
            temp=a[i]; }
    return temp; }
int main() {
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;++i)
        scanf("%d",a+i);
    int lim=INT_MAX,k;
    for(int i=0;i<k;i++) {
        k=getMaxLessThan(lim);
        printf("%d\n",k);
        lim=k; }
    return 0; }
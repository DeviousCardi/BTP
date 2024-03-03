#include <stdio.h>
#include<limits.h>
int a[100]={0};
int n;int k;
int getMaxLessThan(int upperLimit) {
    int temp=INT_MIN;
    for(int i=0;i<n;++i) {
        if(temp<a[i] && a[i]<upperLimit)
            temp=a[i]; }
    return temp; }
int main() {
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;++i)
        scanf("%d",a+i);
    int lim=INT_MAX,p;
    for(int i=0;i<k;i++) {
        p=getMaxLessThan(lim);
        printf("%d\n",p);
        lim=p; }
    return 0; }
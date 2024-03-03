#include <stdio.h>
int a[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max,b[100];
    for(int i=0;i<100;i++) {
        if(a[i]<upperLimit)
        for(int j=0;j<100;j++) {
            b[j]=a[i]; } }
    upperLimit=max;
    return max; }
int main() {
    int n,k,i,z;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k;i++) {
        z=getMaxLessThan(10000); }
    return 0; }
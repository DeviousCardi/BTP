#include <stdio.h>
int a[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0,b[100];
    for(int i=0;i<n;i++) {
        if(a[i]<upperLimit)
        for(int j=0;j<n;j++) {
            b[j]=a[i]; } }
    for(int j=0;j<n;j++)
    printf("%d \n",b[j]);
    for(int i=0;i<n;i++) {
        if(b[i]>max)
        max=b[i]; }
    upperLimit=max;
    return max; }
int main() {
    int k,i,z;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    z=getMaxLessThan(10000);
    printf("%d\n",z);
    for(i=0;i<k-1;i++) {
        z=getMaxLessThan(z);
        printf("%d\n",z); }
    return 0; }
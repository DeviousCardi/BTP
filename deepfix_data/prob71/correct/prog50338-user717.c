#include <stdio.h>
int main() {
    int n,i,t,s,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    printf("\n");
    for(i=0;i<n;i++); {
        for(j=i;j<n;j++) {
            if(a[j]<a[i]) {
            printf("swap %d to %d\n",a[j],a[i]);
            t=a[i];
            a[i]=a[j];
            a[j]=t; } } }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
        s=(a[n/2]+a[(n/2)-1])/2;
        s=a[n/2];
    return 0; }
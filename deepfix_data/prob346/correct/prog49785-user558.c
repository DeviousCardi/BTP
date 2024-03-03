#include <stdio.h>
int main(){
    int n,a[n],i,j,m;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[n]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[j]>a[i]) {
                m=a[j];
                a[j]=a[i];
                a[i]=m; } } }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    printf("end");
    return 0; }
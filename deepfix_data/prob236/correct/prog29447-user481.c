#include <stdio.h>
int main() {
    int n,i,j,x,y,a[n],b[n];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(b[i]>b[j]) {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
                y=b[i];
                b[i]=b[j];
                b[j]=y; } } }
    for(i=0;i<n;i++)
    printf("%d", a[i]);
        printf("end");
    return 0; }
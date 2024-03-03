#include <stdio.h>
int main() {
    int n,j,i,k,temp=0,min=0;
    scanf("%d", &n);
    int a[]=new int[n];
    for(i=0;i<n;i++)
    scanf("%d",a[i]);
    int max=a[0];
    for(i=0;i<n;i++) {
        if(a[i]<min) {
            min=a[i];
            k=i; }
        if(a[i]>max) {
            max=a[i];
            j=i; } }
    temp=a[k];
    a[k]=a[j];
    a[j]=temp;
    for(i=0;i<n;i++)
    printf("%d", a[i]);
    printf("end");
    return 0; }
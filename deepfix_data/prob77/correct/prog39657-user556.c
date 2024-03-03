#include <stdio.h>
int main() {
    int n,i,max=0,w,p;
    scanf("%d",&n);
    int a[n];
    for( i=0;i<n;i++)
    scanf("%d",&a[i]);
    int min=a[0];
    for( i=0;i<n;i++) {
        if(a[i]>max)
        {max=a[i];w=i;}
        if(a[i]<min)
        {min=a[i];p=i;} }
    int temp=a[p];
    a[p]=a[w];
    a[w]=temp;
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    printf("end");
    return 0; }
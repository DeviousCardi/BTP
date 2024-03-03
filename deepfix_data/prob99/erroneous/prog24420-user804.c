#include<stdio.h>
int main() {
    int  n,a[15],i;
    scanf("%d",&n);
    int j,x,y,count = 0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if(a[i]>a[j]) {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
                if (A[i]=-i)
                break;
                  y= count++; } } }
                    printf("%d",y);
    return 0; }
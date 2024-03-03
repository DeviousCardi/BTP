#include <stdio.h>
int main() {
    int n,i,j,max,min,count,k,counter,l;
    scanf("%d",&n);
    int a[n];
    i=1;
    while (i<=n) {
        scanf("%d",&a[i]);
        i++; }
        max=a[0];
        i=1;
        while(i<=n) {
            if (a[i]>max) {
                count=i;
                max=a[i]; }
            i++; }
        min=a[0];
        j=1;
             while(j<=n) {
                if (a[i]<min) {
                    counter=j;
                    min=a[j]; }
                j++; }
        j=counter;
        i=count;
        max=a[i];
        min=a[j];
        k=max;
        max=min;
        min=k;
        l=1;
            while(i<=n) {
                printf("%d ",a[l]);
                l++; }
                printf("end");
    return 0; }
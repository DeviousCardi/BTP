#include <stdio.h>
int main() {
    int n,i,j,max,min,count,k,counter,l;
    scanf("%d",&n);
    int a[n];
    i=0;
    while (i<=n) {
        scanf("%d",&a[i]);
        i++; }
        max=a[0];
        count=0;
        i=1;
        while(i<n) {
            if (a[i]>max) {
                count=i;
                max=a[i]; }
            i++; }
        min=a[0];
        counter=0;
        j=1;
             while(j<n) {
                if (a[j]<min) {
                    counter=j;
                    min=a[j]; }
                j++; }
        printf("%d %d\n",max,min);
        a[counter]=max;
        a[count]=min;
        l=1;
            while(l<=n) {
                l++; }
                printf("end");
    return 0; }
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],max=0,k=0,i,sm=0,j;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        sm=a[i];
        for(j=i+1;j<n;j++) {
            if(a[j]>sm) {
                sm=a[j];
                k++;
                printf("%d %d\n",sm,k); } }
        printf("    %d\n",k);
        if(k>max)
        max=k;
        k=1; }
    printf("%d",max);
    return 0; }
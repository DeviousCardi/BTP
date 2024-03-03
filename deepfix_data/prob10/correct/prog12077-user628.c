#include<stdio.h>
int main() {
    int n;
    int count=1;
    int a[100],b[1000];
    int i,j,k=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int temp=a[0];
        for(j=1;j<n;j++) {
            if (a[j]>temp) {
                count++;
                temp=a[j];
                printf("%d ",temp); } }
        printf("%d ",count);
    return 0; }
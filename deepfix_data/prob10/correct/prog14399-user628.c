#include<stdio.h>
int main() {
    int n;
    int count=0;
    int a[100],b[1000];
    int i,j,k=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int temp=a[0];
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++) {
            if (a[j]>temp) {
                count++;
                temp=a[j]; } }
        b[k]=count;
        k++;
        count=0; }
    for(i=0;i<k;i++) {
        printf("%d",b[i]); }
    return 0; }
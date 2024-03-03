#include<stdio.h>
int a[100];
int getInversions(int l,int r) {
    int Inversions = 0;
    return Inversions; }
int main() {
    int n,k,i,count= 0;
    scanf("%d%d",&n,&k);
     for (i=0;i<n;i++) {
         scanf("%d",&a[i]); }
    for (j = 0;j<n;j++)
    for (i=j;i<n;i++) {
        if (a[i]>a[j])
        count++ }
    printf("%d",count)
    return 0; }
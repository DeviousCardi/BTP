#include<stdio.h>
void arr(int s[],int n) {
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&s[i]); } }
int main() {
    int i,j,n,max=0,k;
    int a[20];
    scanf("%d\n",&n);
    arr(a,n);
    for(i=0;i<n-1;i++) {
        k=1;
        for(j=i;j<n;j++) {
            if(a[j]>a[i])
            k=k+1; }
        if(k>max)
        max=k; }
    printf("%d",max);
    return 0; }
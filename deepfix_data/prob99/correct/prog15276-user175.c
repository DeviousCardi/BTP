#include<stdio.h>
void arr(int s[],int n) {
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&s[i]); } }
int main() {
    int i,j,n,max=0,k,temp;
    int a[20];
    scanf("%d\n",&n);
    arr(a,n);
    for(i=n-1;i>=0;i--) {
        k=1;
        temp=a[i];
        for(j=i;j>=0;j--) {
            if(a[i]>a[j])
            k++; }
        if(k>max)
        max=k; }
    printf("%d",max);
    return 0; }
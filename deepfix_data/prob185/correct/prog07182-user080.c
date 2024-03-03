#include <stdio.h>
int checksum(int array[],int num,int sum) { }
int main() {
    int n,s,i,a[100];
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i=i+1) {
        scanf("%d",&a[i]); }
    checksum(a,n,s);
    return 0; }
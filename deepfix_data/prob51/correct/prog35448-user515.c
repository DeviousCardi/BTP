#include <stdio.h>
void swap(long int a[100000],long int maxid,long int n) {
    int temp=a[maxid];
    a[maxid]=a[n-1];
    a[n-1]=temp; }
long int idmax(long int a[100000],long int n) {
    int maxid=0;
    for(long int i=1;i<n;i++) {
        if(a[i]>a[maxid])
            maxid=i; }
    return maxid; }
void sort(long int a[100000],long int n) {
    if(n==0)
        return;
    int maxid=idmax(a,n);
    swap(a,maxid,n);
    sort(a,n-1);
    return; }
int main() {
    long int n,k,i,a[100000];
    scanf("%ld %ld\n",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%ld ",&a[i]); }
    sort(a,n);
    printf("%ld",a[n-k]);
    return 0; }
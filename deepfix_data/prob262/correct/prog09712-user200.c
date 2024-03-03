#include<stdio.h>
#include<strings.h>
void rvrs(int a[],int strt,int sz);
int main() {
    int n,arr[1000000000],c1,c3;
    scanf("%d", &n);
    for(c1=0;c1<n;c1++) {
        scanf("%d", &arr[c1]); }
    rvrs(arr,0,n);
    for(c3=0;c3<n;c3++) {
        printf("%d", arr[c3]); }
    return 0; }
void rvrs(int a[],int strt,int sz) {
    int temp,c2;
    if(strt==(sz-1))
    return;
    temp = a[strt];
    rvrs(a,(strt+1),sz-1);
    a[sz-1]=temp; }
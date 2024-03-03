#include<stdio.h>
#include<strings.h>
void rvrs(int a[],int strt,int sz);
int main() {
    int n,arr[1000000000],c1,c3;
    scanf("%d", &n);
    for(c1=0;c1<n;c1++) {
        scanf("%d", &arr[c1]); }
    rvrs(arr,0,(n-1));
    for(c3=0;c3<n;c3++) {
        printf("%dmm", arr[c3]); }
    return 0; }
void rvrs(int a[],int strt,int end) {
    int temp;
    printf("a\n");
    if(strt>=end)
    return;
    temp = a[strt];
    a[strt] = a[end];
    a[end] = temp;
    rvrs(a,(strt+1),(end-1)); }
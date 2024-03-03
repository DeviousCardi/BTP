#include<stdio.h>
int sum_heap(int m) {
    int a;
    heap_sum=0;
    for(int i=0;i<m;i=i+1) {
        scanf("%d",&a);
        heap_sum+=a; }
    return heap_sum; }
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int a;
    int l=0;
    for(int j=0;j<n;j=j+1) {
        int ab=heap_sum(3);
        if(l<ab) {
            l=ab; } }
    printf("%d",l);
    return 0; }
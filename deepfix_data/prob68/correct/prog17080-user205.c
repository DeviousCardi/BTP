#include<stdio.h>
long product(int[], int, int, long);
int main() {
    long p = 1;
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    p = product(a,0,n,p);
    printf("%ld", p);
    return 0; }
long product(int a[], int index, int size, long pro) {
    if(index==size)
        return pro;
    pro = pro*a[index];
    return product(a,index+1,size,pro); }
#include<stdio.h>
#include<strings.h>
void fun( int a[],int n) {
    static long int i=0;
    int c[n];
    if(i<n) {
        c[i]=&a[n-i-1];
        i++;
        fun(a,i); } }
int main() {
    long int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    fun(a,n);
    for(i=0;i<n;i++)
    printf("%d ",c[i]);
    return 0; }
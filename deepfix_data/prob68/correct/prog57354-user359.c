#include<stdio.h>
int n;
long product(long t[],int size){
        if(size == 1){
            return t[0]; }
        else{
            return t[size-1]*product(t,size-1); } }
int main() {
    int i;
    scanf("%d",&n);
    long a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    printf("%ld",product(a,n));
    return 0; }
#include<stdio.h>
float product(int i,int prod,int a[],int size) {
    int j=i+1;
    prod*=a[i];
    if(j>size-1)
        return prod;
    else
        return prod*product(j,prod,a,size); }
int main() {
    int i,n;
    float prod=1.0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    i=1;
    printf("%f",product(i,prod,a,n));
    return 0; }
#include<stdio.h>
#include<strings.h>
int n;
void rev(int a[],int i){
    if(i>=0) {
        printf("%d ",a[i]);
        i--;
        rev(a,i--); }
    return; }
int main() {
    int k;
    scanf("%d\n",&n);
    int a[n];
    for(k=0;k<n;k++)
    scanf("%d",&a[k]);
    rev(a,n-1);
    return 0; }
#include <stdio.h>
void sort(int a[],int n){
    int i,j,t;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){ {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t; } } } } }
int main() {
    int n,k,i;
    scanf("%d%d\n",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    sort(a,n);
    printf("%d",a[n-1-k]);
    return 0; }
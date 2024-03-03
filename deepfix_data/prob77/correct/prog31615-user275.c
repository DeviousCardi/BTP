#include <stdio.h>
int main() {
    int n,b,max,min,a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&b);
        a[i]=b; }
    max=a[0];
    min=a[0];
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            min=i+1;max=i; }
        else{
            min=i;max=i+1; } }
    b=a[max];
    a[max]=a[min];
    a[min]=b;
    for (int i=0;i<n;i++){
        printf("%d ",a[i]); }
    printf("end");
    return 0; }
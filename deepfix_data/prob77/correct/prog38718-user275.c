#include <stdio.h>
int main() {
    int n,b,max=0,min=0,a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&b);
        a[i]=b; }
    for(int i=1;i<n;i++){
        if(a[i]>=a[max]){
            max=i; }
        else if(a[i]<=a[min]){
            min=i; } }
    b=a[max];
    a[max]=a[min];
    a[min]=b;
    for (int i=0;i<n;i++){
        printf("%d ",a[i]); }
    printf("end");
    return 0; }
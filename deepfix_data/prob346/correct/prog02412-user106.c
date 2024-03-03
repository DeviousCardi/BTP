#include <stdio.h>
int main(){
    int n,i,min=0,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]<a[i+1])
        min=a[i];
        else if(a[i]>a[i+1])
        max=a[i];
        printf("%d ",a[i]); }
    printf("end");
    return 0; }
#include <stdio.h>
int main(){
    int i,n,j,b;
    int a[n];
    scanf("%d",&n);
    i=0;
    while(i<n) {
        scanf("%d",&a[i]); }
        for(i=0;i<n;i++) {
            for(j=i+1;j<n;j++) {
                if(a[i]>=a[j]) {
                    b=a[i];
                    a[i]=a[j];
                    a[j]=b; } } }
        for(i=0;i<n;i++) {
            printf("%d ",a[i]); }
    printf("end");
    return 0; }
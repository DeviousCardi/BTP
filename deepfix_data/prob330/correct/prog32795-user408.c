#include <stdio.h>
int main() {
    int a[100],i,count=0,n;
    scanf("%d",&n);
    for(i=1;i<n;i++) {
            if((a[i]>a[i-1]) && (a[i]>a[i+1])){
                count=count+1;
                printf("%d",a[i]); } }
    printf("\n%d",count);
    return 0; }
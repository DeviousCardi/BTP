#include <stdio.h>
int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<n-2;i++) {
            if(a[i]<a[i+1]&&a[i+1]>a[i+2])
                count=count+1;
                printf("%d\n",count); }
    printf("%d",count);
return 0; }
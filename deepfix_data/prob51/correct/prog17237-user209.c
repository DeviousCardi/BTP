#include <stdio.h>
int main() {
    int n,k,temp;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) {
            if(a[i]>a[j]) {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp; } }
    printf("%d ",a[k-1]);
    return 0; }
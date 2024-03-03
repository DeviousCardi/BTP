#include <stdio.h>
int main() {
    int n,k,i,j,a[10000000],b[10000],x,temp;
    scanf("%d",&n);
    scanf("%d\n",&k);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
            for(j=i+1;j<n;j++) {
                if(a[i]>a[j]) {
                    temp=a[j];
                    a[i]=a[j];
                    a[j]=temp; } } }
    x=a[k];
    printf("%d",x);
    return 0; }
#include<stdio.h>
int main() {
    int n,p=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[j]>a[i])
            p=p+1; }
        break; }
    printf("%d",p);
    return 0; }
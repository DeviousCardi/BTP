#include<stdio.h>
int main() {
    int a[20]={0,0,0};
    int n,i,j,c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]); }
    for(i=1;i<n;i++) {
        for(j=i-1;j<i;j++) {
            if(a[i]>a[j])
            c++;
            else
            break; } }
    printf("%d",c);
    return 0; }
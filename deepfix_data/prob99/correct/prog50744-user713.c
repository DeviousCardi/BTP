#include<stdio.h>
int main() {
    int a[20]={0,0,0};
    int n,i,j,c1,c2=1;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]); }
    for(i=1;i<n;i++) {
        for(j=0;j<i;j++) {
            c1=0;
            if(a[i]>a[j])
            c1++; }
        if(c1==i)
        c2++;
        else
        continue; }
    printf("%d",c2);
    return 0; }
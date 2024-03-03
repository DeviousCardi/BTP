#include<stdio.h>
int main() {
    int n,count=0,c,max=0,i=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[n]);
    if(n==1)
    printf("%d",a[0]);
    else {
        for(i=0;i<n-1;i++) {
            if(a[i]==a[i]+1)
            count++;
            else {
                if(max>=count) {
                    max=count;
                    c=a[i];} }
            count=0; } }
    printf("%d",c);
    return 0; }
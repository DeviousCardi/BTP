#include <stdio.h>
int main(){
    int n,min=0,t;
    int a[2n];
    scanf("%d",&n);
    for(int i=0;i<2n;i++) {
        scanf("%d",a[i]) }
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[j]==a[i])
            t=j+1;
            if(min<t) {
                min=t; } } }
    printf("%d",min);
    return 0; }
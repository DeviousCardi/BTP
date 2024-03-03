#include<stdio.h>
#include<limits.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else return b; }
int min(int a,int b) {
    if(a<b)
    return a;
    else return b; }
int main() {
    int m,n,a,y,z=-5;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++) {
        y=;
        for(int j=0;j<n;j++) {
             scanf("%d",&a);
             y=max(y,a);
            z=y; }
        if(y<z)z=y; }
    printf("%d",z);
    return 0; }
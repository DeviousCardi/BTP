#include<stdio.h>
int main() {
    int n,a[1000],t=1,c[100],g=0;c[0]=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int x=0;x<n;x++) {
        for(int y=x;y<n;y++) {
            if(x>y) {
                if(a[x]<a[y])
                    c[t]=c[t-1]+1;t++; } } }
    for(int i=1;i<t;i++) {
       g=g+c[i]; }
    printf("%d\n",g);
    for(int i=1;i<t;i++) {
        printf("%d ",c[i]);} }
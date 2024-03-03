#include <stdio.h>
int main() {
    int n;
    int x,p,r,t,h;
    scanf("%d",&n);
    if(n>=2&&n<=1000){
        int a[n];
        int i;
        for(i=0;i<=n-1;i++){
            scanf("%d",&a[i]); }
        for(x=0;x<=n-1;x++){
            int k=0;
            while(k<=n-1){
                if(a[x]<=a[k]){
                    k++; }
                else{
                    break; } }
            if(k==n){
                r=a[x];
                t=x;
                break; } }
        for(p=0;p<=n-1;p++){
            int m=0;
            while(m<=n-1){
                if(a[p]>=a[m]){
                    m++; }
                else{
                    break; } }
            if(m==n){
                h=p;
                a[t]=a[p];
                a[h]=r;
                break; } }
        for(i=0;i<=n-1;i++){
            printf("%d ",a[i]); }
        printf("end"); }
    return 0; }
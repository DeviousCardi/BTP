#include <stdio.h>
int main() {
    int n;
    int x,p,r;
    scanf("%d",&n);
    if(n>=2&&n<=1000){
        char a[n];
        int i;
        for(i=0;i<=n-1;i++){
            scanf("%d",&a[i]); }
        for(x=0;x<=n;x++){
            int k=0;
            while(k<=n&&k!=x){
                if(a[x]<a[k]){
                    k++; }
                else{
                    break; } }
            if(k==n+1){
                r=a[x];
                break; } }
        for(p=0;p<=n;p++){
            int m=0;
            while(m<=n&&m!=p){
                if(a[p]>a[m]){
                    m++; }
                else{
                    break; } }
            if(m==n+1){
                a[x}=a[p];
                a[p]=r;
                break; } }
        for(i=0;i<=n;i++){
            printf("%d ",a[i]); }
        printf("end"); }
    return 0; }
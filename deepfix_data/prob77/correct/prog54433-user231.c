#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n>=2&&n<=1000){
        char a[n];
        int i;
        for(i=0;i<=n-1;i++){
            scanf("%d",&a[i]); }
        for(i=0;i<=n;i++){
            int k=0;
            while(k<=n&&k!=i){
                if(a[i]<a[k]){
                    k++; }
                else{
                    break; } }
            if(k==n+1){ } }
        for(i=0;i<=n;i++){
            int m=0;
            while(m<=n&&m!=i){
                if(a[i]>a[m]){
                    m++; }
                else{
                    break; } }
            if(m==n+1){ } }
        printf("end"); }
    return 0; }
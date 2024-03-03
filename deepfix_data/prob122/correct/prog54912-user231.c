#include <stdio.h>
int main(){
 int n;
 int m=1;
 int k;
 int j=1;
 scanf("%d",&n);
    while(m<=n) {
        while(j<=n){
            if(j<m) {
                scanf("%d",&k);
                if(k==0){
                    j++; }
                else{
                    break; } }
            if(j==m) {
                scanf("%d",&k);
                if(k==1){
                    j++; }
                else{
                    break; } }
            if(j>m) {
                scanf("%d",&k);
                if(k==0){
                    j++; }
                else{
                    break; } } }
        if(j!=n+1) {
          printf("GIVEN %d x %d matrix is NOT an IDENTITY MATRIX",n,n); }
        else{
            m=m+1; } }
    if(m==n+1){
        printf("GIVEN %d x %d matrix is an IDENTITY MATRIX,n,n"); }
    return 0; }
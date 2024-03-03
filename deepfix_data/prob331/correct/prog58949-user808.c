#include <stdio.h>
int main(){
    int i,j,n,c=0 ;
    int a[i];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]); }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==i && a[j]==1){
                c++; }
            else{
                break; } } }
     if(c!=0){
         printf("GIVEN n x n matrix is an IDENTITY MATRIX"); }
    else{
        printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX"); }
    return 0; }
#include <stdio.h>
int main(){
    int n,i,j,s,r;
    r=0;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1){
        for(j=1;j<=n;j=j+1){
            scanf("%d",&s);
            if (i==j){
                if(s!=1){
                    break; }
            }else if (i!=j){
                if (s!=0){
                    break; } }
            r=r+1; }
        if (r==n){
            printf("GIVEN 3 x 3 matrix is an IDENTITY MATRIX");
        }else{
            printf("GIVEN 4 x 4 matrix is NOT an IDENTITY MATRIX"); } }
    return 0; }
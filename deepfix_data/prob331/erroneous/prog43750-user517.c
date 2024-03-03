#include <stdio.h>
int main() {
    int n,flag=0;
    scanf("%d",&n)
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d ",&a);
            if(j==i){
                if(a!=1)
                printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX");
                return 0;
                if(a==1)
                continue; }
            if(j!=i){
                if(a!=0)
                printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX");
                return 0;
                if(a==0)
                continue; } }
        scanf("\n"); }
    if(flag==0){
        printf("GIVEN n x n matrix is an IDENTITY MATRIX"); }
    return 0; }
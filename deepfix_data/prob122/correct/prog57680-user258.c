#include <stdio.h>
int main(){
    int i,j,n,p,b;
    b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        scanf("%d ",&p); }
 b=b+((p==1&&j==i)&&(p==0&&j!=i)); }
    printf("%d",b);
 if(b=n){
     printf("GIVEN n x n matrix is an IDENTITY MATRIX"); }
 else{
    printf("GIVEN n x n matrix is NOT an IDENTITY MATRIX"); }
    return 0; }
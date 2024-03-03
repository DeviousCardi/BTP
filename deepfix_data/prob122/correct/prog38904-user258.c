#include <stdio.h>
int main(){
    int i,j,n,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        scanf("%d ",&p); }
 if((p==1&&j==i)&&(p==0&&j!=i)){
 continue; }
 else{
     printf("no"); } }
    printf("yes");
    return 0; }
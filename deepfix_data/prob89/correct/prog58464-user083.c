#include <stdio.h>
int main(){
    int n,i,k,m,l;
    scanf("%d\n%d\n",&k,&n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]); }
    for(m=0;m<=n;m++){
        for(l=0;l<=n;l++){
            if((num[m]+num[l])==k){
            break; } }
        if((num[m]+num[l])==k)
            break; }
    if(((num[m]+num[l])==k)&&(num[l]!=k)&&(num[m]!=k))  {
            printf("lucky"); }
    else
    printf("unlucky");
    return 0; }
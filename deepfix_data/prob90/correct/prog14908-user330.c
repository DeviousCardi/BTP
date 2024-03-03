#include <stdio.h>
int main(){
    int n,k,i,j,c=0;
    scanf("%d\n%d\n",&k,&n);
    int a[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]); }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            if(a[j]==k-a[i]){
                printf("lucky");
                c++;
                break; } }
        if(c!=0)break; }
    if(c==0)printf("unlucky");
    return 0; }
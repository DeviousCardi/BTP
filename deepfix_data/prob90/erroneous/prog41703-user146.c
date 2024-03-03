#include <stdio.h>
int main(){
    int k,n,c,i,x,j,b[500];
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&b[i]) }
    for(i=0;i<n;i++){
        x=k-b[i];
        for(j=0;j<n;j++){
            s=0;
            if(b[j]==x){
                s=1;
                printf("lucky");
                break; }
            if(s==1)
            break;
        }if(s==1)
        break;
    }if(s==0)
    printf("unlucky");
     return 0; }
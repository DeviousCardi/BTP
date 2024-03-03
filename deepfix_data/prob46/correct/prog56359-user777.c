#include <stdio.h>
int main(){
    int i,m,n;
    int count;
        scanf("%d%d",&m,&i);
        for(i=1;i<m;i++){
    if(m%i==0){
    count=count+1;
    printf("yes",count); }
    else
    printf("no"); }
         return 0; }
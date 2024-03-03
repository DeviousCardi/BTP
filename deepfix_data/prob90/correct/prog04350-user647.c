#include <stdio.h>
int main(){
    int lnum,n,i,j,k,count=0;
    scanf("%d\n",&lnum);
    if((lnum%2)==1){
    scanf("%d\n",&n);
    int a[n];
    int b[500];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]]=1; }
    for(j=0;j<n;j++){
        k=lnum-a[j];
        if(k>lnum)
         continue;
        if(b[k]==1){
            printf("lucky");
            count=1;
            break; } }
    if(count==0)
       printf("unlucky"); }
    return 0; }
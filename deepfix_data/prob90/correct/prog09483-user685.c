#include <stdio.h>
int main(){
    int k,a[1000],l,i,j,m,n,count;
    count=0;
    scanf("%d\n%d\n",&k,&l);
    for(i=0;i<l;i++){
        scanf("%d ",&a[i]); }
    for(m=0;m<l;m++){
        for(n=0;n<l;n++){
            if(count==0){
            if(a[m]+a[n]==k){
                printf("lucky");
                count++; } } } }
    if(count==0){
          printf("unlucky");}
    return 0; }
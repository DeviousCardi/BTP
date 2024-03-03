#include <stdio.h>
int main(){
    int k,a[1000],l,i,j,m,n,count;
    count=0;
    scanf("%d\n%d\n",&k,&l);
    for(i=0;i<l;i++){
        scanf("%d ",&a[i]); }
    if(k%2==1){
    for(m=0;m<l;m++){
        for(n=0;n<l;n++){
            if(count==0){
            if (a[n]==k-a[m]){
                printf("lucky");
                count++; } } } } } } }
    if(count==0){
          printf("unlucky");}
    return 0; }
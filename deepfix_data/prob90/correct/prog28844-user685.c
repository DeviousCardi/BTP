#include <stdio.h>
int main(){
    int k,a[10000000],l,i,j,m,n,count,b[499];
    count=0;
    scanf("%d\n%d\n",&k,&l);
    for(i=0;i<l;i++){
        scanf("%d ",&a[i]); }
    for(m=0;m<l;m++){
    for(j=0;j<=499;j++){
        if(a[m]=j)
        b[j]++; } }
    for(n=0;n<499;n++){
        if(count==0){
        if(b[n]==1 && b[k-n]==1){
            printf("lucky");
            count++; } } }
    return 0; }
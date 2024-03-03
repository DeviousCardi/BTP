#include <stdio.h>
int main(){
    int k,a[10000000],l,i,j,m,count;
    count=0;
    scanf("%d\n%d\n",&k,&l);
    for(i=0;i<l;i++){
        scanf("%d ",&a[i]); }
    for(j=0;j<l;j++){
        if(count==0){
        for(m=0;m<l;m++){
            if(a[j]+a[m]==k){
                printf("lucky");
                count++; } } } }
    if(count==0){
        printf("unlucky"); }
    return 0; }
#include <stdio.h>
int main(){
   int a[1000];
    int i,j,n,k,m=0;
    scanf("%d",&k);
    scanf("%d",&n);
    for (i=0;i<1000;i++){
        scanf("%d",&a[i]); }
    for (i=0;i<1000;i++){
        j=k-a[i];
        while(m<1000){
            if (a[m]==j){
                printf("lucky");
                break; }
            m++; }
    return 0; }
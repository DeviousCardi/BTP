#include <stdio.h>
int main(){
    int k,a[100000],l,i,j,s,m,count,b[499];
    count=0;
    b[0]=0;
    scanf("%d%d",&k,&l);
    for(i=0;i<l;i++){
        scanf("%d",&a[i]); }
    for(j=1;j<500;j++){
        for(s=0;s<500;s++)
        if(j==a[s])
        b[j]++; }
    for(m=0;m<500;m++){
        if(count==0){
        if(b[m]!= 0 && b[k-m]!= 0){
            printf("lucky");
            count++; } } }
        if(count==0)
        printf("unlucky");
        return 0; }
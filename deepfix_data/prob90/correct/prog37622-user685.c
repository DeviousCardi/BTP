#include <stdio.h>
int main(){
    int k,a[1000],l,i,j,s,m,count,b[499]={0};
    count=0;
    b[0]=0;
    scanf("%d\n%d\n",&k,&l);
    for(i=0;i<l;i++){
        scanf("%d ",&a[i]); }
    for(j=1;j<500;j++){
        for(s=0;s<10000;s++)
        if(j==a[s])
        b[j]++; }
    for(m=0;m<10000;m++){
        if(count==0){
        if(b[m]!=0 && b[k-m]!=0){
            printf("lucky");
            count++; } } }
        if(count==0)
        printf("unlucky");
        return 0; }
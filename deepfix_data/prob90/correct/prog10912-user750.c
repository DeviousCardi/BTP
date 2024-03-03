#include <stdio.h>
int main(){
    int n1=0;
    int n,i,j=0;
    int lst[1000];
    int p[1000];
    scanf("%d\n%d\n",&n1,&n);
    for(i=0;i<1000;i++){
        lst[i]=0;
        p[j]=0; }
    for(i=0;i<n;i++){
    scanf("%d",&lst[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<500;j++){
            if(lst[i]==j)
            p[j]=1; } }
    for(i=0;i<=500;i=i++){
            if(p[i]==1 && p[n1-i]==1){
                printf("lucky");
                break; } }
    if(i>500)
     printf("unlucky");
    return 0; }
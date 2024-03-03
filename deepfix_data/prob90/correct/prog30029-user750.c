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
    scanf("%d",&lst[i]);
    lst[lst[i]]=1; }
    for(i=0;i<=500;i+=2){
        if(lst[i]==1 && lst[n1-i]==1){
            printf("lucky");
            break; } }
    if(i>500)
     printf("unlucky");
    return 0; }
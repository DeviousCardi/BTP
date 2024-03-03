#include <stdio.h>
int in(int k,int n,int l[100]){
    int i;
    for(i=0;i<n;i++){
        if(l[i]==k){
            return 1; } }
    return 0; }
int main(){
    int n;
    int ip[100];
    int u[100];
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&ip[i]); }
    int k=1,count=0;
    i=1;
    while(!in(k,n,u)){
        u[0]=1;
        k=ip[k-1];
        i+=1;
        count+=1;
        u[i]=k;
        printf("entered"); }
    printf("%d ",count);
    return 0; }
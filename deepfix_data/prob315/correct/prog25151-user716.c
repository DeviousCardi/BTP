#include<stdio.h>
int main(){
    int n;
    int ip[1000];
    int op[1000];
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ip[i]); }
    int j;
    int total=0;
    for(i=0;i<n;i++){
        int count=0;
        for(j=i+1;j<n;j++){
            if(ip[j]<ip[i]){count+=1;}
            else{continue;} }
        op[i]=count;
        total+=count; }
    printf("%d\n",total);
    for(i=0;i<n;i++){printf("%d ",op[i]);}
    return 0; }
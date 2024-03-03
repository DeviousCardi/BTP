#include<stdio.h>
int sum(int n,int ip[],int key){
    if(n==2){return ip[0]+ip[1];}
    else{
        return ip[key]-sum(n-1,ip,key+1); } }
int main() {
    int n,ip[1000000000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&ip[i]);}
    return 0; }
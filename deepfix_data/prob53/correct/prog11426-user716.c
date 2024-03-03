#include<stdio.h>
long int sum(int n, long int ip[],int key){
    if(key==n){return ip[0];}
    else{
        long int temp=ip[n-key];
        key++;
        return (sum(n,ip,key)-temp); } }
int main() {
    int n;long int ip[1000000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%ld",&ip[i]);}
    printf("%ld",sum(n,ip,1));
    return 0; }
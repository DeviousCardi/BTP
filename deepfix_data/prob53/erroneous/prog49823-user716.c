#include<stdio.h>
int sum(int n, int ip[],int key){
    if(n==2){return ip[0]-ip[1];}
    else{
        int temp=ip[n-key];
        key++;
        return sum(n-1,ip)-temp;} }
int main() {
    int n,ip[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){scanf("%d",&ip[i]);}
    printf("%d",sum(n,ip,1);)
    return 0; }
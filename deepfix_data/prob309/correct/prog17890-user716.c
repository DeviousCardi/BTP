#include <stdio.h>
int count(int k,int n, int a[1000]){
    int i,count=0;
    for(i=0;i<n;i++){
        if(a[i]==k){count+=1;} }
    return count; }
int main(){
    char ip[1000];
    int n;
    scanf("%d\n",&n);
    scanf("%s",ip);
    int i;
    for(i=0;i<n;i++){
        if(ip[i]==','){ip[i]=' ';} }
    return 0; }
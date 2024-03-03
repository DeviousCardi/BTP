#include <stdio.h>
int check(int key,int array[],int start,int len){
    if(key==0)
        return 1;
    if(start==len)
        return 0;
    return check(key,array,start+1,len)||check(key-array[start],array,start+1,len); }
int main(){
    int n,s;
    scanf("%d",&n,&s);
    int i,t[n];
    for(i=0;i<n;i++){
        scanf("%d",&t[i]); }
    printf("%s",check(s,t,0,n)?"YES":"NO"); }
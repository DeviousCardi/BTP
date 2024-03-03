#include <stdio.h>
int main(){
    int n,k,t,i,p,q,count=0;
    scanf("%d",&n);
    int order[n],r;
    for(i=0;i<n;i++) {
        scanf("%d",&order[i]); }
    p=order[0];
    r=p;
    do{
        q=order[p-1];
        order[q-1]=p;
        count++;
    }while(r!=p);
    return 0; }
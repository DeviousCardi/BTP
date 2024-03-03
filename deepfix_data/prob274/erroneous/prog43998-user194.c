#include <stdio.h>
int main(){
    int i,x,t=0,k,n,flag=0;
    int num[100],b[100];
    scanf("%d",&n);
    for(i=1;i<n;i++) {
        scanf("%d",&num[i]); }
    b[0]=1;
    b[1]=num[1];
    for(i=2;i<100;i++) {
        b[i]=num[b[i-1]] }
    for(i=1;i<100;i++) {
        for(j=2;j<100;j++) {
            t=t+1;
            if(b[j]==b[i]) {
                flag=1;
                break; } }
         if(flag==1)
            break; }
    printf("%d",t);
    return 0; }
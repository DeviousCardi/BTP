#include <stdio.h>
int main(){
    int n,i,y=1,p,q[100];
    int exit[100];
    scanf("%d\n",&n);
    q[0]=1;
    for(i=0;i<n;i++)
    scanf("%d",&exit[i]);
    for(p=1;p<5*n;p++) {
        q[p]=exit[y-1];
        y=q[p]; }
    for(int j=0;j<5*n;j++) {
        for(int u=j+1;u<5*n;u++) {
            if(q[j]==q[u]) {
                printf("%d ",u);
                printf("%d",u-j);
                return 0; } } }
    return 0; }
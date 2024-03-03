#include <stdio.h>
int main(){
    int n,t;
    int ip[100];
    int op[100];
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&ip[i]); }
    for(i=0;i<n;i++){
        scanf("%d",&t);
        op[t]=ip[i]; }
    for(i=0;i<n;i++){printf("%d ",op[i]);}
    printf("end");
    return 0; }
#include <stdio.h>
int main(){
    int k,n,a,b,c;
    scanf("%d\n%d\n",&k,&n);
    int list[n];
    for(a=0;a<n;a++)
    scanf("%d",&list[a]);
    for(a=0;a<n;a++) {
        if(a==n-1) {
        printf("unlucky");
        break; }
        for(b=a+1;b<n;a++) {
            c=list[a]+list[b];
            if(c==k)
            printf("lucky");
            else
            continue; } }
    return 0; }
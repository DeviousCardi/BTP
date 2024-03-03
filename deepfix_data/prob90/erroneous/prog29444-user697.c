#include <stdio.h>
int main(){
    int k,n,list[500],a,b;
    scanf("%d\n%d\n",&k,&n);
    for(a=0;a<n;a++)
    scanf("%d",&list[a]);
    for(a=0;a<n;a++) {
        if(a=n-1)
        break;
        for(b=a+1;b<n;a++) {
            if((list[a]+list[b])=k)
            printf("%s",lucky);
            else
            continue; } }
    return 0; }
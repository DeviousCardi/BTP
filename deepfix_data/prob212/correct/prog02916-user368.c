#include <stdio.h>
int main(){
    int m,n,o=1000,p=0,q;
    q=2016;
    scanf("%d",&n);
    while(n!=0){
        m=n/o;
        n=n-(m*o);
        o=o/10;
        p=p+m; }
    for(;;q++){
        if(q%p==0){printf("%d",q);break;} }
    return 0; }
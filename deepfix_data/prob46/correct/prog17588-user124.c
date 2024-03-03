#include <stdio.h>
int main(){
    int n,m,r,s,i;
    s=0;
    r=0;
    scanf("%d",&m);
    scanf("%d",&n);
    if (n==1){
        s=0;
    }else if(n!=1){
        for(i=1;i<=n;i=i+1){
            if (n!=1){
                if(n%i==0){
                    r=r+1; } } }
            s=r-2; }
        if (m==s){
            printf("YES");
        }else{
        printf("NO"); }
    return 0; }
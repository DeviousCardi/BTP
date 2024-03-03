#include<stdio.h>
int t=0;
int product(int p){
    if(t==n)
        return p;
    else{
        int c;
        scanf("%d ",&c);
        t=t+1;
        return product(p*c); } }
int main() {
    int p=1,n;
    scanf("%d",&n);
        p=product(p);
    printf("%d",p);
    return 0; }
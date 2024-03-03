#include <stdio.h>
int main(){
    int a1;
    int a2;
    int n;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&n);
    while(n>1){
        a1=(a1+a2-2);
        n--;
        if(n){
            a2=(a1+a2-2);
            n--;
            if(!n)
            printf("%d",a2); }
        else printf("%d",a1);
        n--; }
    return 0; }
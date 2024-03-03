#include <stdio.h>
int main(){
    int a1,a2,n,p;
    int i=0;
    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&n);
    if(n==1){printf("%d",a1);}
    if(n==2){printf("%d",a2);}
    if(n>2){
        while(i<n){
            p=a1+a2;
            a1=a2;
            a2=p;
            i++; }
        printf("%d",p); }
    return 0; }
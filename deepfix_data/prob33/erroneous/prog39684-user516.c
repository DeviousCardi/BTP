#include <stdio.h>
int main(){
    int h,p,a=o;
    scanf("%d",&h);
    scanf("%d",&p);
    int count=h;
    for(int i=1;i<=p;i++){
        scanf("%d",&b);
        if(b<a){
            tmp=a;
            a=b;
            b=tmp;
            count=count+(a-b); }
        else if(b>a){
            tmp=a;
            a=b;
            b=tmp; } }
    if(count>0)
    printf("Yes");
    else
    printf("No");
    return 0; }
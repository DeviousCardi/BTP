#include <stdio.h>
int main() {
    int h,p,a,b,flag=0,sum=0;
    scanf("%d\n%d\n",&h,&p);
    scanf("%d",&b);
    for(i=0;i<p;i++){
        scanf("%d ",&a);
        if(a<b){
            sum=sum+b-a;
            b=a;
            if(sum>=h){
                flag=1;
                break; }
            continue; }
        if(a>b){
            continue; } }
    if(flag==0){
        printf("YES"); }
    else
    printf("NO");
    return 0; }
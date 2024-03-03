#include <stdio.h>
int main(){
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    float d,s;
    d=x2-x1;
    if(d==0){
        if((y2-y1)!=0)
           printf("inf"); }
    else{
        s=(y2-y1)/d;
        printf("%.2f",s); }
    return 0; }
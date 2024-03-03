#include <stdio.h>
int main() {
    int h,p,temp=0,tmp;
    scanf("%d",&h);
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        tmp=temp;
        scanf("%d",temp);
        if(temp<tmp){
            h=h-(tmp-temp); } }
    if(h>0)
        printf("Yes");
    else
        printf("No");
    return 0; }
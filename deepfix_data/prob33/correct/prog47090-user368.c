#include <stdio.h>
int main() {
    int h,p,height,temp;
    scanf("%d",&h);
    scanf("%d",&p);
    scanf("%d",&height);
    printf("%d",height);
    while(p>0){
        scanf("%d",&temp);
        if(temp>height){
            height=temp;
            continue; }
        else if(temp<height){
            h=h-(height-temp);
            height=temp; }
        else{
            continue; }
        p=p-1; }
    if(h>0){
        printf("Yes"); }
    else{printf("No");}
    return 0; }
#include <stdio.h>
int main()
{   float h;
    scanf("%f",&h);
    int p;
    scanf("%d",&p);
    int a,b,i;
    int lost=0;
    scanf("%d ",&a);
    scanf("%d ",&b);
    for(i=0;i<p-2;i++){
        if(a > b){
            lost = lost + (a - b); }
        a=b;
        scanf("%d ",&b); }
    if(a > b){
        lost = lost + (a - b); }
    if(h > lost){
        printf("Yes"); }
    else{
        printf("No"); }
    return 0; }
#include <stdio.h>
int main() {
    int h,p,a,b,x,count=0;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    scanf("%d",&a);
    while(count<=p){
        b=a;
        scanf("%d",&a);
        if(b>a){
            x=b-a;
            count++; }
    }if(h-x==0){
                printf("No");}
            else
                {printf("Yes");}
    return 0; }
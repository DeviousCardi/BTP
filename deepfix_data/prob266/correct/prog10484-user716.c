#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int sum=a+b+c+d;
    printf("%d\n",sum);
    int i=2016;
    while(1){
        if(i%sum==0){printf("%d",i);break;}
        i++; }
    return 0; }
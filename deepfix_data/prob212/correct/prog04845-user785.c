#include <stdio.h>
int main(){
    int i,y,s=0;
    scanf("%d",&y); {
        s=s+y%10;
        y=(y-y%10)/10;
    }while(y!=0);
    for(i=2016;i%s!=0;i++);
    printf("%d",i);
    return 0; }
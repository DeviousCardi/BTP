#include <stdio.h>
int main(){
    int y1,d,sum=0;
    scanf("%d",&y1);
    int temp=y1;
    while( y1 != 0) {
        d=y1%10;
        sum=sum+d; printf("%d ",sum);
        y1=y1/10; }
    int i=temp;
    printf("\n");
    printf("%d\n",i);
    for (i=temp+1;;i++) {
        if (i%sum==0) {
                        printf("%d",i); break; } }
    return 0; }
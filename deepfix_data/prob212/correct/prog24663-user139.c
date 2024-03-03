#include <stdio.h>
int main(){
    int a[4];
    int i;
    int sum=2016;
    scanf("%d",&a[4]);
        for(i=0;;i++){
            if(sum%(a[0]+a[1]+a[2]+a[3])==0)
            {printf("%d",sum);break;}
            else
            sum =sum+1; }
    return 0; }
#include <stdio.h>
int main(){
    int a,i,j,x,b,y;
    x=1;
    y=0;
    scanf("%d",&a);
    int num[a];
    num[0]=0;
    for(i=1;i<a;i++){
        scanf("%d",&num[i]); }
    for (i=1;i<a;i++){
        b= num[i]
        for (j>i;j<a;j++){
            y+=1
            if(num[j]==b)
            break; }
        x=num[num[x]];
        y=y+1
        if (x==num[j])
        printf("%d %d",j+1,y); }
    return 0; }
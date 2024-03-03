#include <stdio.h>
int main() {
    int money[1001],h,i,j,w,p,l,n,max=0,min=100000000,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&l);
        money[i]=l;
        if(max<l)
        max=l;
        if(min>l)
        min=l; }
    for(j=0;j<n;j++){
        if(money[j]==max)
        w=j;
        if(money[j]==min)
        p=j; }
    temp=money[w];
    money[w]=money[p];
    money[p]=temp;
    for(h=0;h<n;h++){
        printf("%d ",money[h]); }
     printf("end");
    return 0; }
#include <stdio.h>
int main() {
int a,b,i,j,c;
int sum=0;
int max=0;
scanf("%d %d",&a,&b);
int l[a];
for(i=0;i<a;i++){
    sum=0;
    for(j=0;j<b;j++){
        scanf("%d",&c);
         sum=sum+c; }
            l[i]=sum; }
       max=l[1];
       for(i=0;i<a-1;i++){
           if(max<l[i]){
            max=l[i];
            printf("%d ",max); }
        else{
            printf("%d ",max); } }
    return 0; }
#include<stdio.h>
int subtraction(int n){
    int i,x,y;
    char str[n];
    for(i=0;i<n;i++){
        x=str[i];
        y=x-str[i+1];
        return(y); } }
int main()
{  int i,n;
   scanf("%d",&n);
   char str[n];
   for(i=0;i<n;i++){
       scanf("%s",str); }
    printf("%d",subtraction(n));
    return 0; }
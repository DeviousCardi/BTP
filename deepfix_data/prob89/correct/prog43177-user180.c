#include <stdio.h>
void output(int s[],int a,int b);
int main(){
   int k,n;
   scanf("%d",&k);
   scanf("\n%d\n",&n);
   int i=0,list[100];
   while(i<n){
       scanf("%d",&list[i]);
       i++; }
   output(list,k,n);
   return 0; }
void output(int s[],int a,int b){
    int z=0;
    for(int i=0;i<b;i++){
        int sum=0;
        for(int j=i+1;j<b;j++){
            sum=s[i]+s[j];
            if(sum==a)
                z=1; } }
    if(z==0)
        printf("unlucky");
    else
        printf("lucky"); }
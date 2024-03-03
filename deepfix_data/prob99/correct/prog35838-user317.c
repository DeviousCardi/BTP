#include<stdio.h>
int main(){
    int n,max=0;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d ",&a[i]);
    int t[n];
    for(int i=0;i<n;i++)
    t[i]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j]<a[i]){
                t[i]=1+t[j]; } } }
   for(int i=0;i<n;i++){
      if(t[i]>max)
      max=t[i]; }
   printf("\n%d",max);
return 0; }
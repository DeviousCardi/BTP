#include <stdio.h>
int main()
{ int h,p,i,count=0;
 scanf("%d""%d",&h,&p);
 int arr[p];
 for(i=0;i<p;i++){
     scanf("%d",&arr[i]); }
 for(i=0;(h>0&&i<p-1);i++){
    if (arr[i]<arr[i+1])
        continue;
    else
        h=h-(arr[i]-arr[i+1]);
    if(h==0){
        count++;
        printf("No"); } }
 if(count!=0)
     printf("Yes");
    return 0; }
#include <stdio.h>
int main() {
   int a,n,i,arr[30];
   scanf("%d\n",&n);
   for(i=0;i<n;i++){
       scanf("%d ",&arr[i]); }
   a=fun(1,n,arr);
   if(a==1)
        printf("YES");
    else
        printf("NO");
    return 0; }
   int fun(int index,int end,int array[]){
       long int i,sum1=0,sum2=0;
       if(index==end)
            return 0;
       for(i=0;i<index;i++){
           sum1=sum1+array[i]; }
       for(i=index;i<end;i++){
           sum2=sum2+array[i]; }
       if(sum1==sum2)
            return 1;
        else
            return fun(index+1,end,array); }
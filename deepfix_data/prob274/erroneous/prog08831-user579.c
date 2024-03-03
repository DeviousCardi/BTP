#include <stdio.h>
int main(){
   int n,i,j,t=0;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(j=1;j<n;j++) {
           if((a[0]==j)) {
            break; }
           t++;
           if(a[0]==a[j]))
           {break;}
           t++; }
       printf("%d",t);
    return 0; }
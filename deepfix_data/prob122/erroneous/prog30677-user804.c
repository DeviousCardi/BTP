#include <stdio.h>
int main(){
 int i;
 int j;
 int a;
 int n;
 int flag=0;
 scanf("%d",&n);
 for(i=1;i<=n;i=i+1) {
     for(j=1;j<=n;j=j+1) {
        scanf("%d",&a);
        if((i==j&&a==1)||(i!=j&&a==0))
            flag = flag;
        else flag++ } }
 if(flag == 0)
    {printf("IDENTITY MATRIX");}
   if flag!0
   {printf("NON IDENTITY MATRIX")}
    return 0; }
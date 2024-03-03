#include <stdio.h>
# include<math.h>
int T(int n){
    return (T(n-1)+T(n-2)-2); }
int main(){
    int a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
    int i=0;
 for (i=3;i<n;i++) {  if (n==1) T(n)==a1;
    else if (n==2) T(n)==a2;
    else if(n>2) T(n);}
    printf("%d",T(n));
    return 0; }
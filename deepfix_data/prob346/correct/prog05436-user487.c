#include <stdio.h>
int main(){
    int a,b,c;
    int i,j;
    int s[102];
    int p[102];
    int count=0;
    scanf ("%d",&a);
    for (i=0;i<a;i=i+1)
    {scanf ("%d",&c);
    s[i]=c;}
    for (j=0;j<100;j=j+1) {
      for (i=0;i<a;i=i+1)
      {if (s[i]==j)
      printf("%d ",j); } }
    printf("end");
    return 0; }
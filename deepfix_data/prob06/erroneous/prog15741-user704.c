#include <stdio.h>
#include <stdlib.h>
int num_vest(int *soldier,int *vest,int n,int m,int x,int y)
{ int j=0,count=0,i=0;
   while(i<n&&j<m)
   {if((*vest>=(*soldier-x))&&(*vest<=(*soldier+y))){soldier++;count++;j++;i++}
     else if(*vest<=(*soldier-x))j++;
     else if(*vest>=(*soldier+y))soldier++;i++; }
   return count; }
int main() {
	 int n,m,x,y,i;
	 scanf("%d %d %d %d",&n,&m,&x,&y);
	int *soldier,*vest;
  soldier=(int*)malloc(n*sizeof(int));
  vest=(int*)malloc(m*sizeof(int));
  for(i=0;i<n;i++)
  {scanf("%d",&*soldier);if(i!=n-1)soldier++;}
  soldier-=n-1;
  for(i=0;i<m;i++)
  {scanf("%d",&*vest);if(i!=m-1)vest++;}
  vest-=m-1;
  printf("%d",num_vest(soldier,vest,n,m,x,y));
	return 0; }
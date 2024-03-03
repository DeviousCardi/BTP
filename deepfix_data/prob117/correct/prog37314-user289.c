#include <stdio.h>
#include <stdlib.h>
long long int hanoi(int n,int rod1,int rod3,int rod2)
{long long int count;
    if(n==0)
    {count=0;}
    if(n>0){
    count=hanoi(n-1,rod1,rod2,rod3);
    count++;
    count=count+hanoi(n-1,rod2,rod3,rod1);
}    return count; }
int main() {
	int n,y,testcase[100],i,j;
	long long int A[100];
	scanf("%d",&n);
	int a=1,b=2,c=3;
	y=hanoi(n,a,c,b);
	for(i=0;i<n;i++)
	{scanf("%d",&testcase[i]);}
	for(i=0;i<25;i++)
	{A[i]=hanoi(i,a,c,b);}
	for(i=0;i<n;i++)
	{for(j=0;j<25;j++)
	{if(testcase[i]==A[j])
	  printf("yes");}}
  if(i==26)
  printf("no");
	return 0; }
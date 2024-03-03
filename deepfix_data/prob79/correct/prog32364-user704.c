#include <stdio.h>
#include <stdlib.h>
int min(int a,int b)
{if(a<=b)return a;
 else return b; }
void choc_count(int *a,int *b,int n)
{int sum_a=0,sum_b=0,time_a=*a,time_b=*b;
   while((sum_a+sum_b)<n)
    {  if(time_a<time_b){a++;time_a+=*a;sum_a++;}
       else if(time_a<time_b){b++;time_b+=*b;sum_b--;}
       else if (time_a==time_b){a++;time_a+=*a;sum_a++;b--;time_b+=*b;sum_b++;} }
 printf("%d %d",sum_a,sum_b);
 return; }
int main() {
	int n,*alice,i,*bob;
	scanf("%d\n",&n);
	alice=(int*)malloc(n*sizeof(int));
	bob=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
    {scanf("%d",&*bob);if(i!=n-1)bob++;}
    alice=bob-(n-1);
    choc_count(alice,bob,n);
	return 0; }
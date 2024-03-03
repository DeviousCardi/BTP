#include <stdio.h>
#include <stdlib.h>
int hanoi(int n,int rod1,int rod3,int rod2)
{int count,s;
    if(n==0)
    {count=0;}
    if(n>0){
   count= hanoi(n-1,rod1,rod2,rod3);
    count++;
    count+=hanoi(n-1,rod2,rod3,rod1);
}    return count; }
int main() {
	int n,y;
	scanf("%d",&n);
	int a=1,b=2,c=3;
	y=hanoi(n,a,c,b);
	printf("%d",y);
	return 0; }
#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char rod1,char rod3,char rod2)
{int count;
    if(n==1)
    {count=1;}
    hanoi(n-1,rod1,rod2,rod3);
    count++;
    hanoi(n-1,rod2,rod3,rod1);
return count; }
int main() {
	int n,y;
	scanf("%d",&n);
	char a,b,c;
	hanoi(n,a,c,b);
	y=count
	printf("%d",y);
	return 0; }
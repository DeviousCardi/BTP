#include <stdio.h>
int main() {
int i1,i2,i3,s,p;
float avg;
scanf("%d %d %d",&i1,&i2,&i3);
s=0;
s=(i1+i2+i3);
printf("%d",s);
p=1;
p=i1*i2*i3;
printf("\n%d",p);
avg=s/3;
printf("\n%0.3f",avg);
	return 0; }
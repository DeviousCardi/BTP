#include <stdio.h>
#include <stdlib.h>
int main() {
	int l1,l2,l3;
	scanf("%d % %d",&l1,&l2,&l3);
	if((l1>l2)&&(l1>l3))
	{if((l1>(l2+l3))&&((l2<(l1-l3))||(l3<(l1-l2))))
	printf("triangle not possible");
	else {
	    if((l1*l1)>((l2*l2)+(l3*l3)))
	printf("obtuse Triangle");
	    else
	    printf("Not Obtuse Triangle");
	}}
	else if((l2>l1)&&(l2>l3))
	{if((l2>(l1+l3))&&((l1<(l2-l3))||(l3<(l2-l1))))
	printf("triangle not possible");
	else {
	    if((l2*l2)>((l1*l1)+(l3*l3)))
	printf("obtuse Triangle");
	    else
	    printf("Not Obtuse Triangle");
	}}
	else
	{if((l3>(l1+l3))&&((l2<(l3-l1))||(l1<(l3-l2))))
	printf("triangle not possible");
	else {
	    if((l3*l3)>((l1*l1)+(l2*l2)))
	printf("obtuse Triangle");
	    else
	    printf("Not Obtuse Triangle");
	}}
	return 0; }
#include <stdio.h>
int main() {
    float x[3],y[3];
	scanf("%f%f%f%f%f%f",x[0],y[0],x[1],y[1],x[2],y[2]);
	if(x[0]<x[1])  {
	    if(x[2]>x[0]&&x[2]<x[1])  {
	        if((y[2]=y[0])||(y[2]=y[1]))  {
	            printf("Point is on the rectangle"); } } }
	return 0; }
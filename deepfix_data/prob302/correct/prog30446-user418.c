#include <stdio.h>
int main()
{int x1,x2,x3,y1,y2,y3;
	scanf("%d,%d",&x1,&y1);
	scanf("%d,%d",&x2,&y2);
	scanf("%d,%d",&x3,&y3);
	if (x2<x1){
	    x2=x1+x2;
	    x1=x2-x1;
	    x2=x2-x1; }
		if (y2<y1){
	    y2=y1+y2;
	    y1=y2-y1;
	    y2=y2-y1; }
	if(x3>x1 && x3<x2){
	    if(y3>y1 && y3<y2){
	        printf("Point is inside the triangle."); }
	    else{
	        printf("Point is out side the triangle."); } }
	else{
	        printf("Point is out side the triangle."); }
	if (x1==x3 || x2==x3){
	     if(y3>=y1 && y3<=y2){
	        printf("Point is on the triangle."); } }
	    else if (y1==y3 || y2==y3){
	     if(x3>=y1 && x3<=y2){
	        printf("Point is on the triangle."); }
	return 0;
}}
#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(y+z<x ||x+z<y ||x+y<z){
        printf("cannot form triangle"); }
    if(x*x==y*y+z*z|| y*y==x*x+z*z ||z*z==x*x+y*y){
        printf("right triangle"); }
    else{
        printf("Not right triangle"); }
	return 0; }
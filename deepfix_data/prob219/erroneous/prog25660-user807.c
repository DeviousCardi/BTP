#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x>=y&&x>=z){
        if(y>=z){
            printf("%d",y); }
    else
       if(x>=z){
        printf("%d",x); }
        else
     {printf("%d",z);
	return 0; }
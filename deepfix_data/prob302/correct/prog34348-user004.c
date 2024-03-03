#include <stdio.h>
int main() {
	int x1,x2,x3,y1,y2,y3;
	scanf("%d,%d\n",&x1,&y1);
	scanf("%d,%d\n",&x2,&y2);
	scanf("%d,%d",&x3,&y3);
	if(x3>x1){
	    if(x3<x2){
	        if(y3>y1){
	            if(y3<y2){
	                printf("Point is inside the rectangle"); } } } }
	else if(x3==x1){
	    if(y3>y1){
	        if(y3<y2){
	            printf("Point is on the rectangle"); } } }
	else if(x3==x2){
	    if(y3>y1){
	        if(y3<y2){
	            printf("Point is on the rectangle"); } } }
	else if(y3==y1){
	    if(x3>x1){
	        if(x3<x2){
	            printf("Point is on the rectangle"); } } }
	else if(y3==y2){
	    if(x3>x1){
	        if(x3<x2){
	            printf("Point is on the rectangle"); } } }
	return 0; }
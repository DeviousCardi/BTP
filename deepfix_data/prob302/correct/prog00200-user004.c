#include <stdio.h>
int main() {
	float x1,x2,x3,y1,y2,y3;
	scanf("%f%f\n",&x1,&y1);
	scanf("%f%f\n",&x2,&y2);
	scanf("%f%f",&x3,&y3);
	if(x3>x1){
	    if(x3<x2){
	        if(y3>y1){
	            if(y3<y2){
	                printf("Point is inside the rectangle."); } } } }
	if(x3==x1){
	    if(y3>=y1){
	        if(y3<=y2){
	            printf("Point is on the rectangle."); } } }
	if(x3==x2){
	    if(y3>=y1){
	        if(y3<=y2){
	            printf("Point is on the rectangle."); } } }
	if(y3==y1){
	    if(x3>=x1){
	        if(x3<=x2){
	            printf("Point is on the rectangle."); } } }
	if(y3==y2){
	    if(x3>=x1){
	        if(x3<=x2){
	            printf("Point is on the rectangle."); } } }
	else if(y3>y2){
	    printf("Point is outside the rectangle."); }
	else if(y3<y1){
	    printf("Point is outside the rectangle."); }
	else if(x3>x2){
	    printf("Point is outside the rectangle."); }
	else if(x3<x1){
	    printf("Point is outside the rectangle."); }
	return 0; }
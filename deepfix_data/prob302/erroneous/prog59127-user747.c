#include <stdio.h>
int main() {
	float Ax,Cx,Px;
	float Ay,Cy,Py;
	float maxx,minx,maxy,miny;
	if(Ax>Cx){
	    Ax=maxx;
	    Cx=minx; }
	else{
	    Ax=minx;
	    Cx=maxx; }
	if(Ay>Cy){
	    Ay=maxy;
	    Cy=miny; }
	else{
	    Ay=miny;
	    Cy=maxy; }
	if(Px>maxx||Py>maxy||Px<minx||Py<miny){
	    printf("Point is outside the rectangle."); }
	else if(Px<maxx && Px>minx && Py<maxy && Py>miny){
	    printf("Point is inside the rectangle"); }
	if(Px==maxx){
	    if(Py>=miny && Py<=maxy){
	        printf("Point is on the rectangle"); }
	    else if(Px==minx){
	        if(Py>=miny && Py<=maxy){
	        printf("Point is on the rectangle"); } }
	    else if(Py==maxy){
	        if(Px>=minx && Px<=maxx){
	        printf("Point is on the rectangle") }
	    else if(Py==miny){
	        if(Px>=minx && Px<=maxx){
	        printf("Point is on the rectangle") }
		return 0; }
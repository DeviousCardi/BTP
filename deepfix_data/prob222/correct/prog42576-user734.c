#include <stdio.h>
int main() {
	float a,b,c,u,v,w,x,y,z;
	scanf("%f%f%f",&a,&b,&c);
	scanf("%f%f%f",&x,&y,&z);
	u = a*40.0/50.0 + x*60.0/100.0;
	v = b*40.0/50.0 + y*60.0/100.0;
    w = c*40.0/50.0 + z*60.0/100.0;
if(u>v){
    if(u>w){
        if(w>v){
            printf("Median weighted score = %.2f\n",w); }
        else{
        printf("Median weighted score = %.2f\n",v); } }
    else{
        printf("Median weighted score = %.2f\n",u); } }
else{
    if(v>w){
        if(w>u){
            printf("Median weighted score = %.2f\n",w); }
        else{
            printf("Median weighted score = %.2f\n",u); } }
    else{
        printf("Median weighted score = %.2f\n",v); } }
	return 0; }
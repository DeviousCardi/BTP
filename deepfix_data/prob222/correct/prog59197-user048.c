#include <stdio.h>
int main()
{   float a,b,c,x,y,z,A,B,C;
    scanf("%f%f%f",&a,&b,&c);
    scanf("%f%f%f",&x,&y,&z);
    A=(a*0.8)+(x*0.6);
    B=(b*0.8)+(y*0.6);
    C=(c*0.8)+(z*0.6);
    if(A<B) {
        if(A<C) {
            if(B<C) {
                printf("%.2f",B); }
            else {
                printf("%.2f",C); } }
        else {
            printf("%.2f",A); } }
    else {
        if(C<A) {
           if(B>C) {
               printf("%.2f",B); }
           else {
               printf("%.2f",C); } }
        else {
            printf("%.2f",A); } }
	return 0; }
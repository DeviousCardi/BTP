#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a<=b) {
        if (a<=c){
            if (b<=c) {
                printf("%d",b); }
            else {
                printf("%d",c); } }
       else {
                printf("%d",a); } }
    else {
        if (a<=c) {
            printf("%d",a); }
        else {
            if (b<=c) {
                printf("%d",c); }
            else {
                printf("%d",b); } } }
	return 0; }
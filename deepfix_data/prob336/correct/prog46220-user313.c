#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b) {
        if(a>c) {
            if(b+c>a) {
                if(c^2+b^2<a^2) {
                printf("Acute Triangle"); }
                else {
                printf("Not Acute Triangle"); } }
            else {
                printf("Cannot form Triangle"); } } }
	return 0; }
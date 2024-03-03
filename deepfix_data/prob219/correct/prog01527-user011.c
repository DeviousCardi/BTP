#include <stdio.h>
#include <stdlib.h>
int main() {
int x,y,z;
scanf("%d%d%d",&x,&y,&z);
if(x<y&&y!=z&&x!=z) {
    if(z<x)
    {printf("%d",x);}
    else if(x<z&&z<y)
    {printf("%d",z);}
    else if(z>y)
    {printf("%d",y);} }
else if(y<x&&y!=z&&x!=z) {
    if(z<y)
    {printf("%d",y);}
    else if(y<z&&z<x)
    {printf("%d",z);}
    else if(z>x)
    {printf("%d",x);} }
else if(x==y) {
    if(z>x)
    {printf("%d",x);}
    else if(z<x)
    {printf("%d",z);} }
else if(y==z) {
    if(x>y)
    {printf("%d",y);}
    else if(x<y)
    {printf("%d",x);} }
else if(x==z) {
    if(y>x)
    {printf("%d",x);}
    else if(y<x)
    {printf("%d",y);} }
	return 0; }
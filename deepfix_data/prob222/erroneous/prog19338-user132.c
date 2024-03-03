#include <stdio.h>
int main()
{float am,bm,cm,ae,be,ce,amark,bmark,cmark;
scanf("%f%f%f",&am,&bm,&cm);
scanf("%f%f%f",&ae,&be,&ce);
amark=am*0.8+ae*0.6;
bmark=bm*0.8+be*0.6;
cmark=cm*0.8+ce*0.6;
if(amark<=bmark)
{if(amark<=cmark)
{if(bmark<=cmark)
{printf("%.2f",bmark);}
else
{printf("%.2f"cmark);}}
else
{printf("%.2f",cmark);}}
else
{if(cmark>=amark)
{printf("%.2f",amark);}
else
{if(bmark>=cmark)
{printf("%.2f",bmark);}
else
{printf("cmark");}}}
	return 0; }
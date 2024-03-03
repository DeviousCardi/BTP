#include<stdio.h>
int main()
{int e,f,g;
scanf("%d %d %d",&e,&f,&g);
if(e+f>g&&f+g>e&&e+g>f)
{ if(e<=f){if(f<=g) {if(g*g==e*e+f*f) printf("RIGHT");
else if (g*g>f*f+e*e) printf ("OBTUSE");
else printf ("ACUTE");}
else {if(e<=g){if(f*f==e*e+g*g) printf("RIGHT");
else if (f*f>g*g+e*e) printf ("OBTUSE");
else printf ("ACUTE");}}}
else{if(f<=g){if(e*e==g*g+f*f) printf("RIGHT");
else if (e*e>f*f+g*g) printf ("OBTUSE");
else printf ("ACUTE");}}}
else printf("INVALID");
return 0;}
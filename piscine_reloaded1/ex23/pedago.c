#include    <stdio.h>
#include     <math.h>
/* ------------------------------------ */
typedef struct
{
	 double x;
	  double y;
	   char   c; 
	    int    i;

}point2d, *Ppoint2d;
/* ------------------------------------ */
point2d i_value(void)
{
	point2d p={9.,9.,'a',1};

	   return(p);
}
/* ------------------------------------ */
int main(void)
{
	point2d p = i_value();

	 printf("p(%.1f,%.1f); c = %c; i = %d;",
			         p.x,p.y,p.c,p.i);

	  printf("\n\n Press return to continue");

	   getchar();
	    return 0;
}


#include<stdio.h>
#include<math.h>
main()
{
 float y, x[20], f[20], sum, pf;
 int i, j, n;
 printf("Items Number:\n");
 scanf("%d", &n);
 printf("Istenen x degeri:\n");
 scanf("%f", &y);
 printf("Enter x and y values\n");
  for(i = 0; i < n; i++)
  {
  	printf("\nX%d= ",i);
  	scanf("%f",&x[i]);
  	printf("\nY%d= ",i);
  	scanf("%f",&f[i]);
  }
 for(i = 0; i < n; i++)
 {
  pf = 1;
  for(j = 0; j < n; j++)
  {
   if(j != i)
   pf *= (y - x[j])/(x[i] - x[j]);
  }
  printf("\nL%d = %f",i,pf);
  sum += f[i] * pf;
 }
 printf("\n when X = %f ", y);
 printf(" Y = %f ", sum);
}

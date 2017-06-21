#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x*x-4*x*x-10
#define fd(x) 3*x*x-4*x


int main(){



float x0, x1, f0, fd0, e;
float t = 0.0005 ;

printf("Tolerance value: ");
scanf("%f", &t);
printf("Initial value: ");
scanf("%f", &x0);
printf("\n f(x0)\t\tfd(x0)\t\tx1\t\tError");


begin:
f0 = f(x0);
fd0 = fd(x0);
x1 = x0 - (f0/fd0);
e =fabs((x1-x0)/x1);

                if( e < t){
                                printf("\n\n Approximate Root = %.5f", x1);
                }
                else{
                                printf("\n %.2f\t\t%.3f\t\t%.3f\t\t%.4f",f(x0),fd(x0),x1,e);
                                x0 = x1;
                                goto begin;
                }

getch();

}

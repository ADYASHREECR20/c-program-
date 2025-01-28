#include<stdio.h>
int main()
{
  int pw;
  printf("Enter the amount of previous water in gallons\n");
  scanf("%d",&pw);
  int cw;
  printf("Enter the amount of current water in gallons\n");
  scanf("%d",&cw);
  int w = cw - pw;
  double unpaid;
  printf("Enter the amount unpaid\n");
  scanf("%lf",&unpaid);
  double nc = w/1000 * 1.10+35;
  if (unpaid > 0){
    double tc= nc+unpaid +2;
    printf("Total cost is = %lf\n",tc) ;
    }
  else {
    double tc = nc +0;
    printf("Total cost is = %lf\n",tc) ;
  }
  } 
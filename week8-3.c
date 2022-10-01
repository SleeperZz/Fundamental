#include<stdio.h>


double root(float num)
{
    float sqrt,tem;
    
    sqrt = num / 2;
    tem = 0;
    while(sqrt != tem){       
        tem = sqrt;   
        sqrt = ( num/tem + tem) / 2;
    }
    return sqrt;
}   


int main()
{
  int num;
  printf("Provide the Numberz: ");
  scanf("%d", &num);
  printf("The square root of '%d' is '%.2f'", num, root(num));
  return(0);
}




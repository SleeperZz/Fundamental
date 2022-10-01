#include <stdio.h>
int a,b,c;
int swap(int *x,int *y);

int main(){ 
printf("Enter two Numberz to swap: ");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("%d %d",a,b);
return 0; 
}


int swap(int *x,int *y){
   int z;
   z = *x;
   *x = *y;
   *y = z;
}


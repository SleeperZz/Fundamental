#include<stdio.h>
 
int main() {
    int num,i = 0;
    float r = 1;
    printf("Enter a Numberz : ");
    scanf("%d",&num);
    while (1){
        i = i + 1;
        r = (num / r + r)/2;
        if (i == num + 1){ 
        break; 
       }
    }
    printf("Root of %d is %.2f ",num,r);
}
 
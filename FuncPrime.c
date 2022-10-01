#include<stdio.h>  
int main(){    
    int n;
    int isPrime(int);
    printf("Enter the number to check prime:");    
    scanf("%d",&n);   
    printf("%s",isPrime(n));
    return 0;
}

int isPrime(int n){ 
    int flag=0,i,m=0;
    m=n/2;    
    for(i=2;i<=m;i++)
    {    
        if(n%i==0)
        {    
         printf(" %d is not prime",n);
         return n;    
         flag=1;    
         break;    
        }    
    }    
    if(flag==0)
    {    
    printf(" %d is prime number",n);     
    return n;
    } 
}       
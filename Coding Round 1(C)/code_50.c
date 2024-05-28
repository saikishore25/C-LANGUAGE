//Program to find the GCD of two numbers 

#include <stdio.h>

int main(){

    int n1, n2, rem=0;
    printf("Enter the Values to find GCD \n");
    scanf("%d %d", &n1, &n2);
    
    if(n1==0){
        
        printf("The GCD of two numbers is %d \n", n2);
    }
    
    else if(n2==0){
        
        printf("The GCD of two numbers is %d \n", n1);
    }
    
    else{
        
        while(n1%n2!=0){
            
            rem = n1%n2;
            n1 = n2;
            n2 = rem;
            
        }
        
        printf("The GCD of two numbers is %d \n", rem);
    }

    return 0;
}
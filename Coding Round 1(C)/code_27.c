//Program to find whether a shopkeeper made profit or loss 

#include <stdio.h> 
int main() { 

    float real_cost; 
    printf("Enter the real cost of the item \n"); 
    scanf("%f \n", &real_cost);

    float sell_cost; 
    printf("Enter the selling cost of the item \n"); 
    scanf("%f \n", &sell_cost);

    float profit = sell_cost - real_cost; 
    float loss = real_cost - sell_cost;

    if(sell_cost>real_cost){ 

        printf("The vendor made profit of %f \n", profit); 

        } 

    else if(real_cost>sell_cost){ 

        printf("The vendor made loss of %f \n", loss); 

        }

    else{ 
        
        printf("He neither made loss nor profit \n"); 
            
        } 

    return 0; 
    }

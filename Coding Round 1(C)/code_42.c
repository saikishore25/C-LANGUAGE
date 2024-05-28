// Q27. Print the squares and cubes of n number of integers. 


#include<stdio.h>
#include<math.h>

     int main(){
        
        // int n;
        // printf("Enter the value of n \n");
        // scanf("%d \n", &n);

        // while(n<=5){
        //     printf("The cube of %d is %d \n",n, n*n*n );
        //     n++;


        // }

        int n;
        printf("Enter the value of n \n");
        scanf("%d \n", &n);

        for(int i=1; i<=n; i++){
            printf("The cube of %d is %d \n", i, i*i*i);
            


        }
        
     return 0;
}
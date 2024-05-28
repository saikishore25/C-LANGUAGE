// #include<stdio.h>


// int main(){

//     int arr2[3][4];

//     printf("Enter the elements of the 2D matrix \n");

//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             scanf("%d \n", &arr2[i][j]);
//         }

//     }

//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             printf("%d \t", arr2[i][j]);
//         }

//         printf("\n");
// }

//     int sum = 0;

//     for(int i=0;i<3;i++){
//         sum = sum + arr2[i][0];

//     }

//     printf("%d \n", sum);

    



//     return 0;
// }





// #include<stdio.h>

//      int main(){
//        int a[5]="12345";
//        printf("%d \n", a); 
//      return 0;
// }

#include<stdio.h>

int main(){

    int array1[2][3] = {{1,3,4},{2,4,3}};

    for(int i=0; i<2; i++){

        for(int j=0; j<3; j++){

            printf("%d", array1[i][j]);
        }

        printf("\n");

    }

  
return 0;

}



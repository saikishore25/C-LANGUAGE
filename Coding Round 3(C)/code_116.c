// Programs to add two matrices 

#include<stdio.h>
#include<conio.h>

int main(){

    int m1, n1;
    printf("Enter the Values of m and n below \n");
    scanf("%d %d", &m1, &n1);

    int arr1[m1][n1];
    printf("Enter the Array Elements Below \n");

    for(int i=0; i<m1; i++){

        for(int j=0; j<n1; j++){

            scanf("%d", &arr1[i][j]);
        }

    }

    /// Matrix 1 Scanned

    int m2, n2;
    printf("Enter the Values of m and n below \n");
    scanf("%d %d", &m2, &n2);

    int arr2[m2][n2];
    printf("Enter the Array Elements Below \n");

    for(int i=0; i<m2; i++){

        for(int j=0; j<n2; j++){

            scanf("%d", &arr2[i][j]);
        }

    }

    // Matrix 2 Scanned

    int arr3[m1][n1];

    if(m1==m2 && n1==n2){

        printf("Addition of two matrices is Possible \n");

        for(int i=0; i<m1; i++){

            for(int j=0; j<n1; j++){

                    arr3[i][j] = arr1[i][j] + arr2[i][j];
                    printf("%d \t", arr3[i][j]);                
            }

            printf("\n");
        }

    }

    else{

        printf("The Addition of Matrices is Not Possible \n");
    }




    return 0;
}
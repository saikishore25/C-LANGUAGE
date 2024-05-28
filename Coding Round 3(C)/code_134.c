// Program to Delete an Element from an Array 

#include<stdio.h>

    int main(){

        int n;
        printf("Enter the Upper Bound of Array");
        scanf("%d", &n);

        int size;
        printf("Enter the Size of Array \n");
        scanf("%d", &size);

        int array1[n];
        printf("Enter the Array Elements Below: \n");

        for(int i=0; i<size; i++){

            scanf("%d", &array1[i]);
        }

        for(int i=0; i<size; i++){

            printf("%d \t", array1[i]);
        }

        int position;
        printf("Enter the Position You want to Delete the Element in the Array");
        scanf("%d", &position);

        


        for(int i=position-1; i>size-1; i++){

            array1[i] = array1[i+1];
        }

        size--;

        for(int j=0; j<size; j++){

            printf("%d \t", array1[j]);
        }

    return 0;

}
// Program to Insert an Element into an Array 

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
        printf("Enter the Position You want to Insert the Element in the Array");
        scanf("%d", &position);

        int element;
        printf("Enter the Element You want to Insert in the Array \n");
        scanf("%d", &element);


        for(int i=size-1; i>=position-1; i--){

            array1[i+1]  = array1[i];
        }

        array1[position-1] = element;
        size++;

        for(int j=0; j<size; j++){

            printf("%d \t", array1[j]);
        }

     
    return 0;
}
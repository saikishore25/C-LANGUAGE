// 2. BINARY SEARCH


#include<stdio.h>

    int main(){
     
    int n;
    printf("Enter the size of Array \n");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the Array Elements Below \n");
    for(int i=0; i<n; i++){

        scanf("%d", &arr1[i]);
    }

    printf("\n");

    for(int i=0; i<n; i++){

        printf("%d \t", arr1[i]);
    }

    int key;
    printf("Enter the Element which is to be Searched \n");
    scanf("%d", &key);

    int low = 0;
    int high = n-1;
    int mid;

    while(low<=high){

        mid = low + high;

            if(arr1[mid]==key){

                printf("The Element is found at arr1[%d] \n", mid);
                break;
            }

            else if(arr1[mid]<key){
                
                low = mid + 1;
            }

            else{

                high = mid - 1;
            }

    }

    if(low>high){

        printf("The Element was not found in the Array \n");

    }
    
    return 0;
}
// 3. JUMP SEARCH

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){


    int n, i;
    printf("Enter the size of Array Below \n");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the Elements of the Array Below \n");
    for(i=0; i<n; i++){

        scanf("%d", &arr1[i]);
    }

    printf("\n");

    for(i=0; i<n; i++){

        printf("%d \t", arr1[i]); 
    }

    printf("\n");
    
    int key;
    printf("Enter the Element which is to be searched \n");
    scanf("%d", &key);

    int low =0;
    int jump =  sqrt(n);
    
    for( i=0; i<n; i+=jump){

        if(arr1[i]==key){ 

            printf("The Element is found at arr1[%d] \n", i);
        }

        else if(arr1[i]<key){
            low = i;
        }
        else{
            break;
        }
    }

    for( i=low; i<n; i++){

        if(arr1[i]==key){
            
            printf("The Element is found at arr1[%d] \n", i);
            break;
        }


    }

    if(i==n){

        printf("The Element was not found \n");

    }

    


    return 0;
}
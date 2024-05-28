// Pattern 2

#include<stdio.h>
#include<conio.h>

int main(){

    int m, n;
    printf("Enter the number of rows and colomns you want to print \n");
    scanf("%d %d", &m, &n);

    for(int i=0; i<5; i++){

        for(int j=0; j<n; j++){

            printf("%c", 'A'+j);
        }
        printf("\n");
    }

    return 0;
}



// #include<stdio.h>
// #include<conio.h>

// int main(){

//     // int m, n;
//     // printf("Enter the number of rows and colomns you want to print \n");
//     // scanf("%d %d", &m, &n);

//     for(int i=0; i<5; i++){

//         for(char j='A'; j<'E'; j++){

//             printf("%c", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }
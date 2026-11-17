#include <stdio.h>

int main()
{
int choice;
char tryagain;

do{

printf("\n===== MULTI-TOOL APPLICATION =====\n");  
printf("1. Pattern Generator\n");  
printf("2. Pascal's Triangle\n");  
printf("3. Student Grades\n");  
printf("4. Palindrome Number\n");  
printf("5. Exit\n");  

printf("\nEnter your choice: ");  
scanf("%d", &choice);  


if (choice == 1)  
{  
    int n, shape, i, j;  

    printf("\nPick shape:\n");  
    printf("1. Right Triangle\n");  
    printf("2. Square\n");  
    printf("3. Isosceles Triangle\n");  
    printf("4. Inverted Triangle\n");  
    printf("5. Christmas Tree\n");  
    printf("Choice: ");  
    scanf("%d", &shape);  

    printf("Enter the number of rows: ");  
    scanf("%d", &n);  

    if (shape == 1) {  
        for (i = 1; i <= n; i++) {  
            for (j = 1; j <= i; j++) {  
                printf("*");  
            }  
            printf("\n");  
        }  
    }  
    else if (shape == 2) {  
        for (i = 1; i <= n; i++) {  
            for (j = 1; j <= n; j++) {  
                printf("*");  
            }  
            printf("\n");  
        }  
    }  
    else if (shape == 3) {  
        for (i = 1; i <= n; i++) {  
            for (j = 1; j <= n-i; j++) {  
                printf(" ");  
            }  
            for (j = 1; j <= 2*i-1; j++) {  
                printf("*");  
            }  
            printf("\n");  
        }  
    }  
    else if (shape == 4) {  
        for (i = n; i >= 1; i--) {  
            for (j = 1; j <= i; j++) {  
                printf("*");  
            }  
            printf("\n");  
        }  
    }  
    else if (shape == 5) {  
        for (i = 1; i <= n; i++) {  
            for (j = 1; j <= n-i; j++) {  
                printf(" ");  
            }  
            for (j = 1; j <= 2*i-1; j++) {  
                printf("*");  
            }  
            printf("\n");  
        }  

        for (j = 1; j <= n-1; j++) {  
            printf(" ");  
        }  
        printf("*\n");  
    }  
    else {  
        printf("Invalid choice.\n");  
    }  
}  


else if (choice == 2)  
{  
int rows, i, j, num, space;  

printf("Enter number of rows: ");  
scanf("%d", &rows);  

for (i = 0; i < rows; i++) {  

    for (space = 0; space < rows - i - 1; space++) {  
        printf("  ");  
    }  

    num = 1;  

    for (j = 0; j <= i; j++) {  
        printf("%4d", num);  
        num = num * (i - j) / (j + 1);  
    }  

    printf("\n");  
}  


    }else if (choice == 3)  
{  
    float marks;  
    int i;  

    for (i = 1; i <= 5; i++) {  

        printf("\nEnter student Marks: ");  
        scanf("%f", &marks);  

        if (marks >= 1.0 && marks <= 3.0) {  
            printf("You Passed!");  
        }  
        else if (marks >= 3.1 && marks <= 5.0) {  
            printf("You flunked!");  
        }  
        else {  
            printf("Invalid grade!");  
        }  
    }  
}  


else if (choice == 4)  
{  
    int n, t, rev = 0, rem;  

    printf("Enter any number: ");  
    scanf("%d", &n);  

    t = n;  

    for (; n > 0; n = n / 10) {  
        rem = n % 10;  
        rev = rev * 10 + rem;  
    }  

    if (t == rev) {  
        printf("%d is palindrome.", t);  
    }  
    else {  
        printf("%d is not palindrome.", t);  
    }  
}  


else if (choice == 5)  
{  
    printf("Thank you for using the program!\n");  
}  

else  
{  
    printf("Invalid choice.\n");  
}
printf("\nDo you want to try again? (Y/N): ");
scanf(" %c", &tryagain);
}
while (tryagain == 'Y' || tryagain == 'y');
printf("Thank you for using the program!\n");

return 0;

}

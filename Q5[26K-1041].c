#include <stdio.h>

long factorial(int n) 
{
	int i;;
    long fact = 1;
    for (i = 1; i <= n; i++) 
	{
        fact *= i;
    }
    return fact;
}

int reverseNumber(int n) 
{
    int reversed = 0;
    while (n != 0) 
	{
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return reversed;
}

int isPalindrome(int n) 
{
    if (n == reverseNumber(n)) 
	{
        return 1;
    }
    return 0;
}

int sumOfDigits(int n) 
{
    int sum = 0;
    while (n != 0) 
	{
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void printFibonacci(int terms) 
{
    int t1 = 0, t2 = 1, nextTerm, i;
    
    printf("Fibonacci Series: ");
    for (i = 1; i <= terms; i++) 
	{
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() 
{
    int choice, num;

    do {
        printf("1. Factorial\n");
        printf("2. Reverse Number\n");
        printf("3. Check Palindrome\n");
        printf("4. Sum of Digits\n");
        printf("5. Fibonacci Series\n");
        printf("6. Exit\n");
        
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) 
		{
            printf("Invalid input. Exiting.\n");
            break;
        }

        switch (choice) 
		{
            case 1:
                printf("Enter number: ");
                scanf("%d", &num);
                printf("Factorial of %d is %ld\n\n", num, factorial(num));
                break;
                
            case 2:
                printf("Enter number: ");
                scanf("%d", &num);
                printf("Reversed number: %d\n\n", reverseNumber(num));
                break;
                
            case 3:
                printf("Enter number: ");
                scanf("%d", &num);
                if (isPalindrome(num)) 
				{
                    printf("%d is a palindrome.\n\n", num);
                } 
				else 
				{
                    printf("%d is not a palindrome.\n\n", num);
                }
                break;
                
            case 4:
                printf("Enter number: ");
                scanf("%d", &num);
                printf("Sum of digits: %d\n\n", sumOfDigits(num));
                break;
                
            case 5:
                printf("Enter terms: ");
                scanf("%d", &num);
                printFibonacci(num);
                printf("\n");
                break;
                
            case 6:
                printf("Exiting toolkit.\n");
                break;
                
            default:
                printf("Invalid choice! Please select between 1 and 6.\n\n");
        }
    } while (choice != 6);

    return 0;
}


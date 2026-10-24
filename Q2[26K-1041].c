#include<stdio.h>

int isPrime (int n)
{
	int i;
	if(n<=1)
	{
		return 0;
	}
	
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

void printPrimes(int start, int end)
{
	int i;
	printf("Primes: ");
	
	for (i = start; i <= end; i++)
	{
		if(isPrime(i))
		{
			printf("%d\t", i);
		}
	}
	printf("\n");
}

int countPrimes(int start, int end)
{
	int i, count = 0;
	
	for(i = start; i <= end; i++)
	{
		if(isPrime(i))
		{
			count++;
		}
	}
	return count;
}



int main()
{
	int start, end, result;
	
	printf("Enter Range: ");
	result = scanf("%d %d", &start, &end);
	if(result != 2)
	{
		printf("Invalid Input");
		return 1;
	}
	
	if(start >= end)
	{
		printf("ERROR");
		return 1;
	}
	
	printPrimes(start, end);
	int total = countPrimes(start, end);
	printf("Total Prime Numbers Found: %d", total);
	
	return 0;
}

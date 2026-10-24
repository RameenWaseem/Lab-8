#include<stdio.h>

int findTotal(int marks[], int size)
{
	int i, total = 0;
	
	for(i=0; i < size; i++)
	{
		total = total + marks[i];
	}
	return total;
}

float findPercentage(int total, int size)
{
	return ((float)total/(size*100)) *100;
}

char findGrade(float percentage)
{
	if(percentage >= 80)
	{
		return 'A';
	}
	else if(percentage >= 60)
	{
		return 'B';
	}
	else if(percentage >= 40)
	{
		return 'C';
	}
	else
	{
		return 'F';
	}
}

int findMax(int marks[], int size)
{
	int i, max = marks[0];
	
	for(i = 1; i < size; i++)
	{
		if (marks[i] > max)
		{
			max = marks[i];
		}
	}
	return max;
}

int findMin(int marks[], int size)
{
	int i, min = marks[0];
	
	for(i = 1; i < size; i++)
	{
		if (marks[i] < min)
		{
			min = marks[i];
		}
	}
	return min;
}

void printReport(int marks[], int size)
{
	int total = findTotal(marks, size);
	float percentage = findPercentage(total, size);
	char grade = findGrade(percentage);
	int max = findMax(marks, size);
	int min = findMin(marks, size);
	
	printf("Total: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    printf("Highest: %d\n", max);
    printf("Lowest: %d\n", min);
}

int main()
{
	int marks[5], size = 5, i;
	
	printf("Enter 5 marks:\n");
	for(i = 0; i < size; i++)
	{
		if (scanf("%d", &marks[i]) != 1) 
		{
            printf("Invalid input.\n");
            return 1;
        }
	}
	
	printReport(marks, size);
	
	return 0;
}

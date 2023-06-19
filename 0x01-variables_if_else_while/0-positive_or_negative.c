# include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - Prints a random number and states whether
 *it is positive, negative, or zero
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_Max / 2;
	double num;
	    printf("Enter a number: ");
	        scanf("%lf", &num);
		    if (num <= 0.0) {
			            if (num == 0.0)
					                printf("You entered 0.");
				            else
						                printf("You entered a negative number.");
					        } 
		        else
				        printf("You entered a positive number.");

			    return 0;
}
Run Code
You can also solve this problem using nested if...else statement.

Check Positive or Negative Using if...else Ladder
#include <stdio.h>

int main() {

	    double num;
	        printf("Enter a number: ");
		    scanf("%lf", &num);

		        if (num < 0.0)
				        printf("You entered a negative number.");
			    else if (num > 0.0)
				            printf("You entered a positive number.");
			        else
					        printf("You entered 0.");

				    return (0);
}

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int seed,num,count=0,random_no;
    seed = time(NULL)/2;
//give srand the seed of (time/2) to make the numbers random on every Run.
srand(seed);
//generate random numbers
random_no = rand()%1000;
//run and infinite loop
while(1)
{
    count++;
    //input the numbers from the user
    printf("\n\nGuess a number from 0 to 1000 : ");
    scanf("%d", &num);
    if(random_no == num)
    {
        printf("BRAVO!! It is the correct number");
        break;
    }
    if(random_no < num){
        printf("The random number is less than your number, try again");
    }
    if(random_no> num){
        printf("The random number is greater than your number, try again");
    }
    if(count == 7)
    {
        printf("\n\n## Maximum attempts reached, Better luck next time!!\n ");
        break;
    }
}
return 0;
}


#include <stdio.h>
#include<string.h>
#include<ctype.h>
int sumofdigits(int n);

int main()
{
    int i,choice,sum,sum1;
    char name1[50],name2[50];
    float perc;
    do{
        printf("Enter your name: ");
        scanf("%s",&name1);
        printf("Enter your partner's name: ");
        scanf("%s",&name2);
        sum = 0;
        for(i=0;i<(strlen(name1));i++)
        {
            sum+=tolower(name1[i]);
        }
        sum1 = 0;
        for(i=0;i<(strlen(name2));i++)
        {
            sum1+=tolower(name2[i]);
        }
        perc = (sumofdigits(sum)+sumofdigits(sum1))+40;
        if(perc>100)
        perc = 100;
        printf("your love percentage is: %.02f\n\n", perc);
        printf("Want to calculate with someone else: (0 to exit, 1 to continue)");
        scanf("%d",&choice);
    }while(choice!=0);
    return 0;
}
int sumofdigits(int n){
    int sum = 0;
    while(n>0)
    {
        sum+=(n%10);
        n = n/10;
    }
    return sum;
}
    

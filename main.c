#include <stdio.h>
int main (void)
{
int i, j, k, x, y;
char value1, value2; // These are the inputs to detect shape
int continuity=1; // This will be used to end or resume loop

//printf("Shapes you can draw;\n S - Square\n R - Rectangle\n T - Triangle\n E - Exit program\n");
do
{
    //printf("Please enter one of the characters above:");
    scanf(" %c", &value1);
    switch(value1)
    {
    case 'S':
    case 's':

        //printf("Please enter row and column number:");
        scanf("%d", &x);

            for (i=1 ; i<=x ; i++)
            {
                for (j=1; j<=x ; j++)
                {
                    printf("*");
                }
                    printf("\n");
            }

    break;


    case 'R':
    case 'r':

            //printf("Please enter row number:");
            scanf("%d", &x);
            //printf("Please enter column number:");
            scanf("%d", &y);

                for (i=1 ; i<=x ; i++)
                {
                    for (j=1; j<=y ; j++)
                    {
                        printf("*");
                    }
                        printf("\n");
                }


    break;


    case 'T':
    case 't':
        //printf(" U - Upward Triangle\n D - Downward Triangle\nPlease enter one of them:");
        scanf(" %c", &value2);

        if(value2=='U' || value2=='u')
        {
            //printf("Please enter row number:");
            scanf("%d", &x);

                for (i=1 ; i<=x ; i++)
                {
                    for (k=1 ; k<=x-i ; k++)
                    {
                        printf(" ");
                    }
                        for (j=1 ; j<=i ; j++)
                        {
                            printf("*");
                        }
                            printf("\n");
                }
        }
        else if(value2=='D' || value2=='d')
        {
            //printf("Please enter row number:");
            scanf("%d", &x);


                for (i=x ; i>=1 ; i--)
                {
                    for (k=1 ; k<=x-i ; k++)
                    {
                        printf(" ");
                    }
                        for (j=1 ; j<=i ; j++)
                        {
                            printf("*");
                        }
                            printf("\n");
                }
        }
        /*else
        {
            printf("Entered wrong value!\n");
        }*/

    break;

    case 'E':
    case 'e':
        continuity=0;
    break;



    /*default:
        printf("Entered wrong value!\n");
    break;*/

    }
}while (continuity);
return 0;
}

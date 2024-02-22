#include <stdio.h>

FILE *ftpr;
int pick()
{

}
int main()
{
 ftpr = fopen("dictionnaire.csv", "r");
    char myString[100];
    while (fgets(myString, 100, ftpr))
        {   
                printf("%s", myString);
        }
    fclose(ftpr);
}
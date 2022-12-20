#include <stdio.h>
int main()
{
    //using character array.. lets see
    char name1[30],name2[30],i;
    printf("\tEnter your name:\n");
    gets(name1);
    //copying characters one by one
    for(i=0;name1[i]!='\0';i++)
    {
        name2[i]=name1[i];
    }
    name2[i]='\0';

    //displaying the result
    puts(name2);







}

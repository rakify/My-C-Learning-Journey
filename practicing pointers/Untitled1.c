
#include <stdio.h>
#include <string.h>
int main()
{
    char name[3][10];
    char id[3][10];

    char search[10];
    int i;

    for(i=0; i<=2; i++)
    {
        /*fgets(name[i],10,stdin);
        fgets(id[i],10,stdin);
        fgets(gpa[i],5,stdin);*/
        scanf("%9s",name[i]);
        scanf("%9s",id[i]);
           }
           name[0][10]='\0';


    printf("enter id to search");
    scanf("%9s",search);

    for(i=0;i<=2;i++)
    {
        if(strcmp(id[i],search)==0)
            printf("%s",name);
    }


}



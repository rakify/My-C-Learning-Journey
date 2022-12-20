#include <stdio.h>
#include <string.h>

//declaring function name
int ascending(int intarr[],int);
int descending(int intarr[],int);
int insert(int intarr[],int);
int del(int intarr[],int);
int search(int intarr[],int);
int save(int intarr[],int);

//assume this as main function if user choose integer array
int main()
{
    int elements,i,intarr[10],choice;
start:
    puts("How many elements in your integer array? (>10)");
    scanf("%d",&elements);
    if(elements>10)
    {
        elements=10;
        puts("Elements exceeded limit so we make it by default 10. ");
    }
    printf("Give us %d integer values:\n",elements);
    for(i=0; i<=elements-1; i++)
    {
        scanf("%d",&intarr[i]);
    }
    puts("GOT'EM!");

menu:
    puts("\n\n\t***MAIN MENU***\n"
         "\t1: SHOW IN ASCENDNG ORDER\n"
         "\t2: SHOW IN DESCENDING ORDER\n"
         "\t3: INSERT\n"
         "\t4: DELETE\n"
         "\t5: SEARCH\n"
         "\t6: SAVE AS FILE\n"
         "\t7: START AFRESH\n"
         "\t8: EXIT\nENTER YOUR CHOICE: ");

    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        ascending(intarr,elements);
        goto menu;
        break;
    case 2:
        descending(intarr,elements);
        goto menu;
        break;
    case 3:
        insert(intarr,elements);
        goto menu;
        break;
    case 4:
        del(intarr,elements);
        goto menu;
        break;
    case 5:
        search(intarr,elements);
        goto menu;
        break;
    case 6:
        save(intarr,elements);
        goto menu;
        break;
    case 7:
        goto start;
        break;
    case 8:
        break;
    default:
        puts("\t!!!  error! out of choices!  !!!\n");

    }

    puts("\n\n\tTHANKS FOR RUNNING THIS PROGRAM\n\tCREATOR: R4K16");
}
int ascending(int intarr[],int elements)
{
    int i,j,temp,prompt;
    //swapping
    for(i=0; i<=elements-2; i++)
    {
        for(j=i+1; j<=elements-1; j++)
        {
            if(intarr[i]>intarr[j])
            {
                temp=intarr[i];
                intarr[i]=intarr[j];
                intarr[j]=temp;
            }
        }
    }
    //displaying the result
    puts("HERE YOU GO.... ");
    for(i=0; i<=elements-1; i++)
    {
        printf("%d ",intarr[i]);
    }

    puts("\n\tWANT TO SAVE THEM IN THIS ORDER AS A TEXT DOCUMENT?\n"
         "\t1: YES\n"
         "\t2: RETURN TO MENU\nENTER YOUR CHOICE: ");
    scanf("%d",&prompt);
    if(prompt==1)
    {
        save(intarr,elements);
    }


}
/*end of ascending*/
int descending(int intarr[],int elements)
{
    int i,j,temp,prompt;
    //swapping
    for(i=0; i<=elements-2; i++)
    {
        for(j=i+1; j<=elements-1; j++)
        {
            if(intarr[i]<intarr[j])
            {
                temp=intarr[i];
                intarr[i]=intarr[j];
                intarr[j]=temp;
            }
        }
    }
    puts("HERE YOU GO.... ");
    //displaying the result
    for(i=0; i<=elements-1; i++)
    {
        printf("%d ",intarr[i]);
    }

    puts("\n\tWANT TO SAVE THEM IN THIS ORDER AS A TEXT DOCUMENT?\n"
         "\t1: YES\n"
         "\t2: RETURN TO MENU\nENTER YOUR CHOICE: ");
    scanf("%d",&prompt);
    if(prompt==1)
    {
        save(intarr,elements);
    }

}
/*end of descending*/
int insert(int intarr[],int elements)
{
    int pos,val,i,j,put;
    puts("position to insert?");
    scanf("%d",&pos);
    puts("the value?");
    scanf("%d",&val);
    for(i=pos;i<=elements-1;i++)
    {
        for(j=i+1;j<=elements;j++)
        {
            intarr[i]=put;
            put=intarr[j];
            intarr[j]=intarr[i];
        }
    }

    puts("here you go...");
    for(i=0;i<=elements;i++)
    {
        printf("%d ",intarr[i]);
    }

}
/*end of start*/
int del(int intarr[],int elements)
{

}
/*end of del*/
int search(int intarr[],int elements)
{


}
/*end of search*/
int save(int intarr[],int elements)
{
    FILE *x;
    //writing to the file
    x = fopen("file.txt","w");
    for(int i=0; i<=elements-1; i++)
    {
        fprintf(x,"%d ",intarr[i]);
    }
    fclose(x);
    puts("\tFILE SAVED SUCCESSFULLY!\n");

}
/*end of save*/

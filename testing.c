#include<stdio.h>
int main()
{
    FILE *fp;
    char ch, fname[30], newch[500];
    int i=1, j, COUNT=0;
    printf("Enter An Existing Filename with extension: ");
    gets(fname);
    fp = fopen(fname, "r");
    printf("\nThe original content is:\n\n");
    
    while(ch != EOF)
    {
        ch=getc(fp);
		COUNT++;
        printf("%c",ch);
		newch[i]=ch;
        i++;
    }
    printf("\n");
    printf("\nThe content in reverse order is:\n\n");
    for(j=(COUNT); j>0; j--)
    {
        ch=newch[j];
        printf("%c",ch);
    }
    printf("\n");
    return 0;
}

#include<stdio.h>
#include<ctype.h>
int main()
{
	int i,idpointer=0,oppointer=0,dipointer=0;
	char a[100],id[100],op[100],di[100];
	printf("Entre a string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(isdigit(a[i]))
		{
			di[dipointer]=a[i];
			dipointer++;
		}
		else if(isalpha(a[i]))
		{
			id[idpointer]=a[i];
			idpointer++;
		}
		else
		{
			op[oppointer]=a[i];
			oppointer++;
		}
	}
	printf(" identifiers : ");
     for(i=0;i<idpointer;i++)
	 {
        printf("%c ",id[i]);
     }
    printf("\n constants : ");
     for(i=0;i<dipointer;i++)
	 {
        printf("%c ",di[i]);
     }
    printf("\n operators : ");
      for(i=0;i<oppointer;i++)
	  {
        printf("%c ",op[i]);
      }
}

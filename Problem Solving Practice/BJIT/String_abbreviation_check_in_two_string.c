#include<conio.h>
#include<string.h>
void main()
{
int i,j=0,m=0;
char orgname[50],abrevname[10];

printf("Enter The Organisation Name:");
gets(orgname);
for(i=0;i<strlen(orgname);i++)
{
abrevname[m]=orgname[j];
if(orgname[i]==' ')
{
m=m+1;
j=i;
//abrevname[m]=orgname[j];
j++;
}
}
abrevname[m+1]='\0';
printf("\nThe Abbrevation is \n");
printf("%s",abrevname);

}

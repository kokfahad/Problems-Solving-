/*
#include <stdio.h>
int main() {
char name[10];
printf("Enter your  name plz: ");
fgets(name, 6, stdin);
printf("My name is %s ",name);
return 0;}
*/
#include <stdio.h>
int main()
{char town[40];
  printf("Enter your town: ");
  gets(town);
  fputs(town, stdout);
  return 0;}

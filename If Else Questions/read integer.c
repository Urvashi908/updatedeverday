#include<stdio.h>
#include<math.h>
void readinteger()
{
  int num;
  printf("\nEnter The Number .\n");
  scanf("%d",&num);
  printf("\nOutput Is\n\n");
  printf("%d  ,%d  ,%d \n\n",num,num*num,num*num*num);
}
int main()
{
	readinteger();
}


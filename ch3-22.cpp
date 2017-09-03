#include<stdio.h>
int main()
{
  char subject[12] ="Programming";
  char nick[4] = "com";
  char nick_1[4] = {'c','o','m','\'0'};
  char name[] = "jirasak";
  printf("%15s%15s%15s%15s\n",subject,nick,nick_1,name);
  printf("%s\n",nick);
  printf("%s\n",nick_1);
  printf("%s\n",name);
  return 0;
}

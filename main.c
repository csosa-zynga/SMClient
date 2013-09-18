#include "stdio.h"

void Foo();
void Bar();

int main()
{
   printf("Hello");
   Foo();
   Bar(); 
   return 0;
}

void Foo()
{
  printf("Doing some Foo stuff");
}

void Bar()
{
  printf("Doing Bar stuff");
}

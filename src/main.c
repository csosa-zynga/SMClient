#include "stdio.h"
#include "math.h"

void Foo();
void Bar();
int UpstreamTest();

int main()
{
   printf("Hello");
   Foo();
   Bar();
   Bar();
   Foo();
   Foo();
   UpstreamTest(); 
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

int UpstreamTest()
{
  return 42;
}

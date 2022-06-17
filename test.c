
#include <stdio.h>

void	myStartupFun(void) __attribute__((constructor));
void	myStartupFun(void)
{
    printf("wtf");
}
  
int main(void)
{
}

#include "driver.h"

int main()
{
  Driver *pDriver__Vanya = new Driver(Automatic);
  Driver *pDriver__Pasha = new Driver(Manual);
  
  pDriver__Vanya->Drive();
  pDriver__Pasha->Drive();
  
  return 0;
}

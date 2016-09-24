/**************************************
*
*
*
**************************************/

#include "driver.h"

/*** constructor ****/

Driver::Driver(espec spec)
{
  this->spec = spec;
  
}

bool Driver::Drive()
{
  bool result = true;
  this->roll(result);
  
  return(result);
}


void Driver::Stop()
{
  
}

bool Driver::On()
{
  return(true)
}

void Driver::breaking()
{

}

/*********************************
*Function: Тронуться

*Description: Тронуться в зависимости от специализации
****/

bool Driver::roll(bool spirits)
{
  if (spirits == true)
  {
    
   if (this->On() == true)
   {
     
   
                  //заводим тачку, трогаемся в зависимости от коробки передач
   
   if (this->espec == Automatic)
    {
                  //жать на тормоз
    }
   else
    {
    
    }   
   }
  }
  //коробка автомат
}
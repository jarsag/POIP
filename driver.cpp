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
*Function: ���������

*Description: ��������� � ����������� �� �������������
****/

bool Driver::roll(bool spirits)
{
  if (spirits == true)
  {
    
   if (this->On() == true)
   {
     
   
                  //������� �����, ��������� � ����������� �� ������� �������
   
   if (this->espec == Automatic)
    {
                  //���� �� ������
    }
   else
    {
    
    }   
   }
  }
  //������� �������
}
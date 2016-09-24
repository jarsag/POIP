/*******************************************
*

*Description: Описание класса водитель (Driver)

*

********************************************/
#ifndef DRIVER_H
#define DRIVER_H

typedef enum 
{
  Manual = 0,
  Automatic = 1
}espec;

class Driver
{
  public: 
    Driver(espec spec);
    bool Drive();
    void Stop();
    
  private:
    bool On();
    void roll(bool spirits);
    void breaking();
    espec spec;
}

#endif //DRIVER_H
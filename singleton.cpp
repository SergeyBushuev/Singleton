#include "stdlib.h"
class singleton
{
   public:
       static const singleton& Instance()
        {
                static singleton SingleInstance;
                return SingleInstance;
        }
       singleton(const singleton&) = delete;             //Не должен вызываться
       singleton& operator=(const singleton&) = delete;  //Не должен вызываться
       ~singleton();
   private:
       singleton() {
       //Конструктор. Объявлен как private для избежания вызова за пределами класса
       }
};

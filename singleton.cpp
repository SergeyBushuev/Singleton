#include "stdlib.h"
class singleton
{
   public:
       static singleton* getInstance(){
         if (!instance){
            instance = new singleton();
            return instance;
         }
       }
       ~singleton();
   private:
       singleton() {};
       singleton(const singleton&);  
       singleton& operator=(singleton&);
       static singleton* instance;
};

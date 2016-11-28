#include "stdlib.h"
class singleton
{
   public:
       static singleton* getInstance( );
       ~singleton( );
   private:
       singleton( );
       static singleton* instance;
};

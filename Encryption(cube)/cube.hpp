#include "cube.h"

Cube::Cube()
{
    
}
Cube::~Cube()
{

}

void  Cube::turn_right()
{
    // this->str = str[7]   +str[0]   +str[3]  +str[4]  +str[5]  +str[2]  +str[1]  +str[6];  
   char tmp = str[0];
    str[0] =  str[7];
    str[7] = str[6];
    str[6] = str[1];
    str[1] = tmp;
    tmp = str[3];
    str[3] = str[4];
    str[4] = str[5];
    str[5] = str[2];
    str[2] = tmp;
}
void  Cube::turn_left()
{
    //this->str = str[1]+str[6]+str[5]+str[2]+str[3]+str[4]+str[7]+str[0];  
    char tmp = str[0];
    str[0] =  str[1];
    str[1] = str[6];
    str[6] = str[7];
    str[7] = tmp;
    tmp = str[2];
    str[2] = str[5];
    str[5] = str[4];
    str[4] = str[3];
    str[3] = tmp;
}
void  Cube::turn_up()
{
    //this->str = str[7]+str[6]+str[1]+str[0]+str[3]+str[2]+str[5]+str[4];  
    char tmp = str[0];
    str[0] = str[7];
    str[7] = str[4];
    str[4] = str[3];
    str[3] = tmp;
    tmp = str[1];
    str[1] = str[6];
    str[6] = str[5];
    str[5] = str[2];
    str[2] = tmp;
}
void  Cube::turn_down()
{
    //this->str = str[3]+str[2]+str[5]+str[4]+str[7]+str[6]+str[1]+str[0]; 
    char tmp = str[0];
    str[0] = str[3];
    str[3] = str[4];
    str[4] = str[7];
    str[7] = tmp;
    tmp = str[1];
    str[1] = str[2];
    str[2] = str[5];
    str[5] = str[6];
    str[6] = tmp; 
}

void  Cube::set_value(std::string str)
{
      this->str = str;
      
}
std::string  Cube::get_value()
{
    return this->str;   
}
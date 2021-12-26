#include <iostream>
class Cube
{
public:
    Cube();
    ~Cube();
public:
    void set_value(std::string);
    std::string get_value();
    void turn_right();
    void turn_left();
    void turn_up();
    void turn_down();
private:
    std::string str;
    
};
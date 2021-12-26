#include "cube.hpp"

class Controller{
public:
    Controller(){};
    ~Controller(){};
public:
    void set_value(std::string str,std::string key)
    {
        for(int i = 0; i < key.size(); i++)
        {
            if((key[i]>='0' && key[i]<='9') || (key[i]>='A' && key[i]<='Z'))
            {
                
            }
            else
            {
                std::cout<<"KEY is invalid";
                abort();
            }
        }
        this->str = str;
        this->key = key;
       
    }

    std::string get_value(){
        return this->str_f;
    }
    void play()
    {
        std::string mutq_str; std::cin>> mutq_str;
        std::string mutq_key; std::cin>> mutq_key;
        
        set_value(mutq_str,mutq_key);
        for(int i = 0; i < str.size()/8+1;i++)
        {
            std::string tmp = str.substr(0,8);
            str.erase(0,8);
            foo(tmp,key);  
        } 
        std::cout<<get_value();
    }
    private:
    
    std::string str;
    std::string key;
    std::string str_f;



    void foo(std::string strr,std::string key)
    {
        Cube cube;
        cube.set_value(strr);

        for(int i = 0; i < key.size();i+=2)
            {
                if(key[i]=='L'){
                        while(key[i+1]--)
                        {
                            cube.turn_left();   
                        } 
                }
                else if(key[i]=='R'){
                        while(key[i+1]--)
                        { 
                        cube.turn_right();
                        }
                }  
                else if(key[i]=='U'){
                        while(key[i+1]--)
                        { 
                        cube.turn_up();
                        }
                }
                else if(key[i]=='D'){
                        while(key[i+1]--)
                        {
                        cube.turn_down();
                        }
                }  
            }
        str_f += cube.get_value();
    }
    

};
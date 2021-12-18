#ifndef CPU_H
#define CPU_H
#include<iostream>
#include<vector>
#include<map>
#include "ram.h"

class CPU {
public:
    void go() ;
    void move_register(std::string,int) ;
    void print_register(std::string) ;
    int get_register(std::string reg) ;
private:
    int CR_EAX ;
    int CR_EBX ;
    int CR_ECX ;
    int CR_EDX ;    
    class CU {
    public:
        void analize_info(RAM&, CPU &) ;
    private:
        int SP {} ;
    } ;
    class ALU {
    public:
        int add(std::string, std::string, CPU&) ;
        int mul(std::string, std::string, CPU &) ;
        int div(std::string, std::string, CPU &) ;
        int sub(std::string, std::string, CPU &) ;
        int modul(std::string, std::string, CPU &) ;
        bool and_(std::string, std::string, CPU &) ;
        bool or_(std::string, std::string, CPU &) ;
        bool xor_(std::string, std::string, CPU &) ;
        bool not_(std::string, CPU &) ;
        bool jmp_g(std::string, std::string, CPU &) ;
        bool jmp_l(std::string, std::string, CPU &) ;
        bool jmp_e(std::string, std::string, CPU &) ;
    } ;
    ALU alu ;
    CU cu ;
} ;

#endif
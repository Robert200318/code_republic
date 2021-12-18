#ifndef RAM_H
#define RAM_H
class RAM {
public:
    void translate() ;
    std::map<int,std::vector<std::string>> memory ;
private:
    std::vector<std::string> keywords_instruction {"cr_mov" , "cr_add" , "cr_sub" , "cr_mul",
     "cr_div" , "cr_cmp", "cr_jump", "cr_and", "cr_or", "cr_xor", "cr_not" , "cr_print" , "cr_jmp_g" , "cr_jmp_l" , "cr_jmp_e" } ;
    std::vector<std::string> keywords_registers { "cr_eax", "cr_ebx", "cr_ecx", "cr_edx" } ;
} ;
#endif
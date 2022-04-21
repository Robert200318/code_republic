#include <iostream>
#include <string>
class Shashki{
private:
    int count1 = 12;
    int count2 = 12;
    std::string taxtak[9][9] = {{"   "," a "," b "," c "," d "," e "," f "," j "," h "},
                                {" 1 ","   "," 0 ","   "," 0 ","   "," 0 ","   "," 0 "},
                                {" 2 "," 0 ","   "," 0 ","   "," 0 ","   "," 0 ","   "},
                                {" 3 ","   "," 0 ","   "," 0 ","   "," 0 ","   "," 0 "},
                                {" 4 ","   ","   ","   ","   ","   ","   ","   ","   "},
                                {" 5 ","   ","   ","   ","   ","   ","   ","   ","   "},
                                {" 6 "," * ","   "," * ","   "," * ","   "," * ","   "},
                                {" 7 ","   "," * ","   "," * ","   "," * ","   "," * "},
                                {" 8 "," * ","   "," * ","   "," * ","   "," * ","   "},};
    bool player1;
    bool player2;
    void gcik(){
        for (int i = 0; i < 12; i++)
        {   
            
            std::cout<<"---";
        }
    }

int findIndex(std::string symbol)
{
    for (int i = 0; i < 9; i++)
    {
        if(taxtak[0][i]==symbol)
        {
            return i;
        }
    }
}

void errorr(int tiv1,int tiv2,std::string x)
{
    if (!(taxtak[tiv1][tiv2]==x))
    {
        std::cout<<"Error *******8";
        abort();
    }
}

void nkarel()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        { 
            std::cout<<taxtak[i][j];
            std::cout<<"|";
        }

    std::cout<<std::endl;
    gcik(); 
    std::cout<<std::endl;
    }
}

public:

    Shashki ()
    {
        player1 = true;
        player2 = false;
        nkarel();
    }

    void game(){
        while(1){
                
            if (player1==true)
            {   

                std::string symbol1;
                std::cin>>symbol1;
                symbol1= " " + symbol1 + " ";
                int tiv1;
                std::cin>>tiv1;
                int tiv11 = findIndex(symbol1);
                errorr(tiv1,tiv11," * ");
                
                std::string symbol2;
                std::cin>>symbol2;
                symbol2= " " + symbol2 + " ";
                int tiv2;
                std::cin>>tiv2;
                int tiv22 = findIndex(symbol2);
                errorr(tiv2,tiv22,"   ");
                if(tiv1-2 == tiv2 && tiv22 != tiv11)
                { 
                    if((tiv22-tiv11) == 2 && taxtak[tiv2+1][tiv22-1]==" 0 ")
                    {
                        taxtak[tiv2][tiv22]=taxtak[tiv1][tiv11];
                        taxtak[tiv1][tiv11]= "   ";
                        taxtak[tiv2+1][tiv22-1] = "   ";
                        count1--;
                    }

                    else if ((tiv22-tiv11) == (-2) && taxtak[tiv2+1][tiv22+1]==" 0 ")
                    {
                        taxtak[tiv2][tiv22]=taxtak[tiv1][tiv11];
                        taxtak[tiv1][tiv11]="   ";
                        taxtak[tiv2+1][tiv22+1] = "   ";
                        count1--;
                    }
                }
                else if(tiv22!=tiv11 && tiv2+1==tiv1)
                {
                    std::cout<<"dfdfdfdfdfdf";
                    taxtak[tiv2][tiv22]=taxtak[tiv1][tiv11];
                    taxtak[tiv1][tiv11]="   ";
                }
                else 
                {
                    std::cout<<"error";
                    abort();
                }
                nkarel();
                player1=false;
                player2=true;
            }
            if(count2== 0 || count1 == 0)
            {
                std::cout<<"finish  booom player 1";
            }
            
            if (player2==true)
            {   
                std::cout<<"dsfgsdg";
                std::string symbol1;
                std::cin>>symbol1;
                symbol1= " " + symbol1 + " ";
                int tiv1;
                std::cin>>tiv1;
                int tiv11 = findIndex(symbol1);
                errorr(tiv1,tiv11," 0 ");
                
                std::string symbol2;
                std::cin>>symbol2;
                symbol2= " " + symbol2 + " ";
                int tiv2;
                std::cin>>tiv2;
                int tiv22 = findIndex(symbol2);
                errorr(tiv2,tiv22,"   ");
                if(tiv1+2 == tiv2 && tiv22 != tiv11){ 
                    if((tiv22-tiv11) == 2 && taxtak[tiv2-1][tiv22+1]==" * ")
                    {
                        taxtak[tiv2][tiv22]=taxtak[tiv1][tiv11];
                        taxtak[tiv1][tiv11]= "   ";
                        taxtak[tiv2+1][tiv22-1] = "   ";
                        count2--;
                    
                    }
                    else if ((tiv22-tiv11) == (-2) && taxtak[tiv2-1][tiv22-1]==" * ")
                    {
                        taxtak[tiv2][tiv22]=taxtak[tiv1][tiv11];
                        taxtak[tiv1][tiv11]="   ";
                        taxtak[tiv2+1][tiv22+1] = "   ";
                        count2--;
                        
                    }
                }
                else if(tiv22!=tiv11 && tiv2-1==tiv1)
                {
                    taxtak[tiv2][tiv22]=taxtak[tiv1][tiv11];
                    taxtak[tiv1][tiv11]="   ";
                }
                else 
                {
                    std::cout<<"error";
                    abort();
                }
                nkarel();
                player2=false;
                player1=true;
            }
            if(count2== 0 || count1 == 0)
            {
                std::cout<<"finish  booom player 2 ";
            }
        }
    }
};
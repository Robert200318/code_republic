class Calculator {
private:
    int x;
    int y;
public:
    Calculator()
    {
        x = 0;
        y = 0;
    }
public:
    void set(int x,int y);
    int add();
    int sub();
    int mul();
    bool div(); 
};
#include <iostream>

class Myclass{
    private:
        enum{MaxLen=255};
        int a[MaxLen];
        const int DivideByTwo=2;
    public:
        template<typename T>
        inline void parity(const T& a)
        {
            f(a%DivideByTwo?1:0);
        }
        const char& operator[](std::size_t position)const
        {
            
            return text[position];
        }
};
#include <iostream>  
using namespace std;  
  
int main() {  
    // [C_OT32-��] �q�Ʀr  
    int a, b, c;//��,�Q,��  
    int num;  
    cin >> num;  
    for(a=0;a<10;a++)  
    {  
        for(b=0;b<10;b++)  
        {  
            for(c=0;c<10;c++)  
            {
                if(num == ((a+b+c)*222-(a*100+b*10+c)))  
                {  
                    cout << a << b << c << endl;  
                }  
            }  
        }  
    }  
    return 0;  
}  
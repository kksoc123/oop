#include <iostream>  
#include <string.h>  
using namespace std;  
  
int main() {  
    // [C_ST16-��] �N����ƼƦr���O�L�X  
    string num;  
    while(cin >> num)  
    {  
        int count = num.size();  
        char re[count];  
        strcpy(re, num.c_str());//string to char  
        for(int i = 0;i < count;i++)//��X  
        {  
            if(i == 4)  
            {  
                cout << re[i] << endl;  
            }  
            else  
            {  
                cout << re[i] << "   ";  
            }  
        }  
    }  
    return 0;  
}  
#include <iostream>  
using namespace std;  
  
int main() {  
    int num;   //�a���Ʀr
    while(cin >> num)  
    {  
        if(num % 2 == 0)  //�Q�G�㰣�̬�����
        {  
            cout << "even" << endl;  
        }  
        else              //�_�h�����
        {  
            cout << "odd" << endl;  
        }  
    }  
    return 0;  
}  
#include <iostream>  
using namespace std;  
  
int main() {  
    // [C_OT42-��] �άP���� * ���e�x��  
    int m, n;  
    //��O�C�Am = �C�C��m��*�An = ���X�C
    while(cin >> m >> n)  
    {  
        if(m == 0 || n == 0)  //m��n���@�ӬO�s�A���N�S����
        {  
            cout << "no answer" << endl;  
        }  
        else  
        {  
            for(int i = 1;i <= n;i++)   //�Ĥ@��for�j��O����X�C => n
            {  
                for(int j = 1;j <= m;j++)  //�C�C���X��* => m
                {  
                    cout << "*" ;  
                }  
                cout << endl;  
            }  
        }  
    }  
    return 0;  
}  
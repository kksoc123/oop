#include <iostream>  
using namespace std;  
   
int main() {  
    // [C_MM34-��] �]�ư��D  
    int num;  //�n��X���Ʀr���]��
    while(cin >> num)  
    {  
        for(int i = 1;i<=num;i++)  //1~num�}�l����
        {  
            if(num % i == 0)  //�i�H�Q�㰣���N�O�]��
            {  
                if(i == num)  
                {  
                    cout << i << endl;  //��̫�@�Ӧ]�ƮɡA��X���O����
                }  
                else  
                {  
                    cout << i << " ";   //�_�h���Oi�[�W�ť�
                }  
            }  
        }  
    }  
    return 0;  
}  
#include <iostream>  
using namespace std;  
  
int main() {  
    // [C_CH08-��] �p��MVP�ƭ�  
    int score , rebounds, assists, screenshots, errors;  
    //�����o���B�x�O��  �B�U��� �B  �ۺI��   �B���~�ơC  
    int mvp;  
    while(cin >> score >> rebounds >> assists >> screenshots >> errors)  
    {  
        mvp = (score*1 + assists*2 + rebounds*2 + screenshots*2) - (errors*2);  
        if(mvp>=45)  
        {  
            cout << "A" << endl;  
        }  
        else if(35 <= mvp && mvp <= 44)  
        {  
            cout << "B" << endl;  
        }  
        else if(25 <= mvp && mvp <= 34)  
        {  
            cout << "C" << endl;  
        }  
        else if(mvp < 25)  
        {  
            cout << "D" << endl;  
        }  
    }  
    return 0;  
}  
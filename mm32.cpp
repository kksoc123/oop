#include <iostream>  
#include <cmath>  
using namespace std;  
  
int main() {  
    int num;  //�ϥΪ̭n���ժ��Ʀr
    double Armstrong, a, b, c;  
    while(cin >> num)  
    {  
        a = floor(num / 100);  //�ʦ�
        b = num / 10 % 10;     //�Q��
        c = num % 10;          //�Ӧ�
        Armstrong = pow(a,3)+pow(b,3)+pow(c,3);  //�U�Ӧ�ƼƦr���ߤ�M
        if(num == Armstrong)  
        {  
            cout << "Yes" << endl;  
        }  
        else  
        {  
            cout << "No" << endl;  
        }  
    }  
    return 0;  
}  
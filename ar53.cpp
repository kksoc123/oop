#include <iostream>  
#include <algorithm>//sort()  
using namespace std;  
  
int main() {  
    // [C_AR53-��] �ǥͦ��Z�Ƨ�  
    int n;//�ǥͼ�  
    cin >> n;  
    int grade[n];//���Z  
    for(int i = 0;i < n;i++)  
    {  
        cin >> grade[i];  
    }  
    sort(grade,grade+n);  
    for(int i = 0;i < n;i++)  
    {  
        cout << grade[i] << endl;;  
    }  
    return 0;  
}  
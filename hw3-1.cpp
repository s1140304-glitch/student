#include <iostream>
#include <string>
using namespace std;

int main() {
    // 宣告變數
    string name;
    int num1, num2;
    
    // 輸入名字
    cout << "請輸入你的名字: ";
    getline(cin, name);
    
    // 輸出問候語
    cout << "你好, " << name << "!" << endl;
    
    // 輸入兩個數字
    cout << "請輸入兩個數字, 用空白隔開: ";
    cin >> num1 >> num2;
    
    // 輸出結果
    cout << "你輸入的是: " << num1 << " 和 " << num2 << endl;
    
    return 0;
}

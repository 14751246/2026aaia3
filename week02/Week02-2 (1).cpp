///Week02-2.cpp 要使用 命名空間
#include <iostream> ///上週教的
#include <string> /// 使用std命名空間
using namespace std;
int main()
{ ///就不用在寫一堆 std::
    string name; ///使用標準的 字串
    cout << "請輸入你的名字";
    cin >> name;
    cout << name << "你好,你會用字串了";
    }

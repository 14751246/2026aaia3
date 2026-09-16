///week02-1.cpp 練習c++ string字串
///File-Save As 存檔成.cpp檔
#include <iostream> ///上週教的
#include <string> ///今天新教的
///以前大一c語言 是用char name[100];宣告麻煩
///scanf("%s", name); //讀資料也很麻煩,一堆
int main()
{
    std::string name; ///使用標準的 字串
    std::cout << "請輸入你的名字";
    std::cin >> name;
    std::cout << name << "你好,你會用字串了";
    }

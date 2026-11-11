//week10-2.cpp學習計畫math 第1題(數學方法, 精簡 漂亮 快速)
//LeetCode 1523 Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0; // 失敗的例子
        for(int i=low; i<=high; i++){ //失敗的例子
            if(i%2==1) ans++; //失敗的例子
        }
        return ans; //竟然成功了 等一下重新再一次
    }
};

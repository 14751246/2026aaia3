//week12-2.cpp 學習計畫 Linked List 第3題
//LeetCode 2. Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans = new ListNode(999); // 工具1
        ListNode*now = ans; //一個會移動的指標
        int carry = 0; //進位的英文 叫carry
        while (l1 != nullptr || l2 != nullptr){//把&&改成||
            if(l1 != nullptr) carry += l1->val;
            if(l2 != nullptr) carry += l2->val;
            now->next = new ListNode(carry%10);
            now = now->next;
            carry = carry/10; //超過10的進位的部分
            if(l1 != nullptr)l1 = l1->next;
            if(l2 != nullptr)l2 = l2->next;
        }
        if(carry) now->next = new ListNode(carry);
        return ans->next;
        //while (l1 != nullptr || l2 != nullptr){ //工具2 while迴圈 逐個處理
            //int now = l1 ->val + l2->val + carry;
            //ans->next = new ListNode(now%10);//取個個位數 放入新圈圈
           // now = now -> next;
            //carry = now/10; //超過10的近位的部分
           // cout << l1->next; //工具2
           // cout << l2->next; //工具2
            // }
           // return ans;
    }
};

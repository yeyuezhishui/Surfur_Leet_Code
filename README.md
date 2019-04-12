# Surfur_Leet_Code
## 217. Contains Duplicate
- [contains_duplicate.cpp](https://github.com/yeyuezhishui/Surfur_Leet_Code/blob/master/contains_duplicate.cpp)
  使用unordered_map解决，辅助hash法
- [contains_duplicate_2.cpp](https://github.com/yeyuezhishui/Surfur_Leet_Code/blob/master/contains_duplicate_2.cpp)
  使用sort排序后找相邻元素是否相同的方法
## 3. Longest Substring Without Repeating Characters
- [bytedance1.cpp](https://github.com/yeyuezhishui/Surfur_Leet_Code/blob/master/bytedance1.cpp)
  使用map进行hash映射，通过查询map中对应键的值来确定元素是否被访问过
- [bytedance1_ans.cpp](https://github.com/yeyuezhishui/Surfur_Leet_Code/blob/master/bytedance1_ans.cpp)
  本题Leetcode提交Solution版
## 71. Simplify Path
- [bytedance1_2_ans.cpp](https://github.com/yeyuezhishui/Surfur_Leet_Code/blob/master/bytedance1_2_ans.cpp)
  用字符串流将字符串进行分割（以'/'为单位），将子串放入数组中，没遇到'','.','..'则将子串存入结果数组中，遇到‘.‘跳过，遇到‘..’则从结果数组中pop一个元素
## 15. 3Sum
- [bytedance2.cpp](https://github.com/yeyuezhishui/Surfur_Leet_Code/blob/master/bytedance2.cpp)
  先排序，再收尾各一个指针相向移动，注意去重
- [bytedance2_ans.cpp](https://github.com/yeyuezhishui/Surfur_Leet_Code/blob/master/bytedance2_ans.cpp)
  本题Leetcode提交Solution版
## 695. Max Area of Island
- [bytedance2_2_ans.cpp](https://github.com/yeyuezhishui/Surfur_Leet_Code/blob/master/bytedance2_2_ans.cpp)
  当检索到为1的值时（1代表岛屿，0代表海洋），递归求出连接的1的最大面积，注意在递归时将计算的过的位置的值置零
## 155. Min Stack
- [bytedance4.cpp](https://github.com/yeyuezhishui/Surfur_Leet_Code/blob/master/bytedance4.cpp)
  使用两个STL stack 一个用来存放栈元素，一个用来存放栈最小元素，注意理解问什么更新后的最小元素栈栈顶依然是当前最小元素
## 155. Add Two Numbers
- [bytedance3_2_ans.cpp](https://github.com/yeyuezhishui/Surfur_Leet_Code/blob/master/bytedance3_2_ans.cpp)
  链表结构的两数相加，相加直到遍历完两个链表，某个链表遍历完后停止，主要思路是存储进位值
## 206. Reverse Linked List
- [bytedance3.cpp](https://github.com/yeyuezhishui/Surfur_Leet_Code/blob/master/bytedance3.cpp)
  常规反转链表，三个指针完成
## 122. Max Profit 2
- [bytedance4_2_ans.cpp](https://github.com/yeyuezhishui/Surfur_Leet_Code/blob/master/bytedance4_2_ans.cpp)
  从下标1的元素开始遍历一边，若当前元素大于前一个元素则将他们的差加到最大收益中

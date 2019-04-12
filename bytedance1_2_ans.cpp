#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class Solution {
public:
    void split(string s, char delim, vector<string>& nodes){
        string temp;
        stringstream ss(s);
        while(getline(ss, temp, delim)){
            nodes.push_back(temp);
        }
    }

    string simplifyPath(string path) {
        vector<string> st;
        vector<string> nodes;
        string result;
        split(path, '/', nodes);
        for(auto node : nodes){
            if(node == "" || node == ".") continue;
            if(node == ".." && !st.empty()) st.pop_back();
            else if(node != "..") st.push_back(node);
        }
        for(auto it : st) result += "/" + it;
        return result.empty() ? "/" : result;
    }
};
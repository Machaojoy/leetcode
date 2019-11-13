using namespace std;

#if 0
class Solution {
public:
    string reverseWords(string s) {
        string::size_type pos = 0;
        string::iterator it = s.begin();

        while ((pos = s.find(' ', pos)) != string::npos) {
            //cout << pos << endl;
            std::reverse(it, s.begin() + pos);
            //cout << s << endl;
            pos += 1;
            it = s.begin() + pos;
        }

        std::reverse(it, s.end());
        return s;
    }
};

#else

class Solution {
public:
    // 反转字符串：b = b^a^b = a; a = a^b^a = b;
    void reverseString(int front, int tail, string& str) {
        while (front < tail) {
            str[front] ^= str[tail];
            str[tail] ^= str[front];
            str[front++] ^= str[tail--];
        }
    }
    // 确定单词边界
    string reverseWords(string s) {
        int front = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                reverseString(front, i - 1, s);
                front = i + 1;
            }
        }
        reverseString(front, s.length() - 1, s);
        return s;
    }
};

#endif

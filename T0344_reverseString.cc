
#if 0

class Solution {
public:
    void reverseString(vector<char>& s) {
        int front = 0;
        int tail = s.size() - 1;

        while(front < tail) {
            s[front] ^= s[tail];
            s[tail] ^= s[front];
            s[front++] ^= s[tail--];
        }

    }
};

#else

class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>::iterator front,tail;

        if(!s.size())
            return;

        front = s.begin();
        tail = s.end() - 1;
        char tmp;

        while(front < tail) {
            tmp = *front;
            *front = *tail;
            *tail = tmp;
            front++;tail--;
        }
    }
};

#endif

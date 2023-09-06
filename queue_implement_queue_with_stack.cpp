#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    stack<int> st;
    stack<int> s;
    MyQueue()
    {
    }

    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        while (st.empty() != true)
        {
            s.push(st.top());
            st.pop();
        }

        int a = s.top();
        s.top();

        while (s.empty() != true)
        {
            st.push(s.top());
            s.pop();
        }
        return a;
    }

    int peek()
    {
        while (st.empty() != true)
        {
            s.push(st.top());
            st.pop();
        }
        int a = s.top();
        while (s.empty() != true)
        {
            st.push(s.top());
            s.pop();
        }
        return a;
    }

    bool empty()
    {
        if (st.empty() != true)
        {
            return false;
        }
        else
            return true;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
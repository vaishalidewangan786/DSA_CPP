
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, p;
    cin >> n;
    multiset<pair<int, int>, greater<pair<int, int>>> st;
    map<pair<int, int>, int, greater<pair<int, int>>> st2;
    queue<int> q1, q2;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        st.insert({a, 1});
        st2[{a, 1}] = 0;
        q1.push(a);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        st.insert({a, 2});
        st2[{a, 2}] = 0;
        q2.push(a);
    }
    cin >> p;

    for (auto x : st)
    {
        if (st2[{x.first, x.second}] == 0 && p > 0)
        {
            if (x.second == 1)
            {
                while (x.first != q1.front())
                {
                    q1.pop();
                    st2[{q1.front(), 1}] = 1;
                }
                cout << q1.front() << " ";
                q1.pop();
            }
            else if (x.second == 2)
            {
                while (x.first != q2.front())
                {
                    q2.pop();
                    st2[{q2.front(), 2}] = 1;
                }
                cout << q2.front() << " ";
                q2.pop();
            }
            p--;
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;


int b = 0;
int a = 0;

int arr[30];
void bin_num(int n)
{
    while (n > 0)
    {
        a = n % 2;

        arr[b] = a;

        b++;
        n = n / 2;
    }
    int count = 1;
    int maxcount = 1;

    for (int i = b; i > 0; i--)
    {
       cout<<arr[i-1]<<" ";
        if (arr[i - 1] == 1 && arr[i - 2] == 1)
        {
            count++;
        }
        else if (arr[i - 1] == 0 && arr[i - 2] == 1)
        {
            count = 1;
        }
        else if (arr[i - 1] == 1 && arr[i - 2] == 0)
        {
            count = 1;
        }
        else if (arr[i - 1] == 0 && arr[i - 2] == 0)
        {
            count = 1;
        }

        if (count > maxcount)
        {
            maxcount = count;
        }
    }
    cout<<endl;
    cout << maxcount << endl;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(n_temp);
    bin_num(n);
    return 0;
}


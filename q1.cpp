//Rik Chatterjee
//2010991687
//Set 3
//Q1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        a.push_back(l);
    }
    for (int i = 1; i < n; i += 2) //to check every second element
    {
        if (a[i - 1] > a[i]) //finds if the number before is greater, swaps if yes
        {
            int t = a[i];
            a[i] = a[i - 1];
            a[i - 1] = t;
        }

        if (i + 1 < n && a[i + 1] > a[i]) // finds if the number after is smaller, swaps if yes
        {
            int t = a[i];
            a[i] = a[i + 1];
            a[i + 1] = t;
        }
    }
    cout<<"{";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<", ";
    }
    cout<<"}";

    return 0;
}

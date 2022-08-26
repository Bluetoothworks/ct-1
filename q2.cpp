//Rik Chatterjee
//2010991687
//Set 3
//Q2

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; // size of the array
    cin>>n; 
    vector<int> a; // array to store the numbers
    unordered_map<int, int> m; //map to store if the pair has already been printed
    for(int i=0;i<n;i++)
    {
        int l;
        cin>>l;
        a.push_back(l);
        m[l]=0;
    }
    int target;
    cin>>target;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(m[target-a[i]]!=1 && target-a[i]!=a[i]) //to check if the a pair exists that sums up to target and check if they arent equal pairs
        {
            cout<<"{"<<a[i]<<", "<<target-a[i]<<"}, ";
            m[target-a[i]]=1;
            m[a[i]]=1;
            c++;
        }
    }
    if(c==0)
        cout<<"Pair not found";

    return 0;
}







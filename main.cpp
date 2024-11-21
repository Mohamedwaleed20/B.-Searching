#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n ;
    cin >> n ;
    long long arr[n];
    for(long long i = 0 ; i<n;i++)
    {
        cin >> arr[i];
    }
    long long a ;
    cin >> a ;
    bool x = false ;
    for(long long i = 0 ; i<n;i++)
    {
        if(a==arr[i])
        {
            x = true ;
            cout << i;
            break ;
        }
    }
    if(!x)
    {
        cout << "-1" << endl ;
    }


    return 0;
}

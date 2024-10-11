#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {
        int a , n  , c = 1 ;
        cin >> a >> n ;
        int sum = 0 ;
        for ( int i = 1 ; i <= n ; i++ )
        {
            sum += abs( ( i % a ) - i % ( a - 1 )) ;
        }
        
        cout << " Case " << c << ": " << sum << endl ;
        c++ ;
    }
    

    return 0;
}
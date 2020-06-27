/*************
 * 统计整数n癿二迕刢展开中数位1癿总数： O(logn)
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int countOnes(unsigned int n)
{
    int ones=0;
    while(0<n)
    {
        ones += (1&n);  // 位运算巧妙
        n >>= 1;
    }
    return ones;
}
int main()
{
    cout<<countOnes(7);
    return 0;
}
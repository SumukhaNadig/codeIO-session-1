#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
bool dividesBy3(int n)
{
    if(n%3==0)
    {
        cout<<n;
        return true;
    }
    return false;
}

int main()
{
    int i=0;
    std::vector<int> num(10);
    //vector<int>::iterator s=num.begin();
    //*s=5;
    for(i=0; i<10; i++)
    {
        num[i]=i;
    }
    std::cout<<"SIze is: "<<num.size();
    int v=count_if(num.begin(),num.end(),dividesBy3);
    cout<<"  Count is: "<<v;
}
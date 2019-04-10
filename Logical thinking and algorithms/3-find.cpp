#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i=0;
    std::vector<int> num(10);
    vector<int>::iterator s;
    //*s=5;
    for(i=0; i<10; i++)
    {
        num[i]=i;
    }
    std::cout<<"Size is: "<<num.size();
    int f=5;
    s= find(num.begin(),num.end(),f);
    if(s==num.end())
    {
        cout<<"Element not present";
    }
    else
    {
        cout<<"Found at position: "<<s-num.begin()+1;
    }
}
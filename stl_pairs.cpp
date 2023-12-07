#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void pairs(){
    pair<int, int> p = {1,3};
    cout << p.first << " " << p.second << "\n";


    pair<int, int> array[] = { {1,2}, {2,5}, {5,1}};
    cout << array[1].second;
}


int main()
{
  
    pairs();
    return 0;
}
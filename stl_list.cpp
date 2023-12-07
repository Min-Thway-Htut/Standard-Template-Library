#include <iostream>
#include <bits/stdc++.h>
#include <list>

using namespace std;

void lists()
{
    list<int> ls; //creating an empty list
    
    ls.push_back(1); //Inserting the first number(1)
    ls.emplace_back(2); //Inserting the second number {1,2}

    ls.push_front(0); //Inserting the third number(0) on index 0. {0,1,2}

    for (auto it: ls)
    cout << it << " ";
}

int main()
{

    lists();
    return 0;
}
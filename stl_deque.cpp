#include <iostream>
#include <deque>
using namespace std;

void Deque(){
    deque<int>dq;

    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}

    dq.push_front(0); //{0,1,2}
    dq.push_front(-1); //{-1,0,1,2}
    dq.emplace_front(-2); //{-2,-1,0,1,2}

    dq.emplace_back(3); //{-2,-1,0,1,2,3}
    dq.push_back(4); //{-2,-1,0,1,2,3,4}

    dq.pop_back();  //{-1,0,1,2}
    dq.pop_front(); //{-1,0,1,2,3}

    dq.front();
    dq.back();

    for(auto it: dq)
    cout << it << " ";


}

int main()
{
    Deque();

    return 0;
}
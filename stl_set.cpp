#include <iostream>
#include <set>
using namespace std;

void Set()
{
    set<int>st;
    st.insert(1);     // {1}
    st.insert(2);     // {1,2}
    st.emplace(2);    // {1,2} It is still the same as we can't add the same numbers in set
    st.insert(3); // {1,2,3}
    st.insert(5); // {1,2,3,}
    st.insert(4); // {1,2,3,4,5} In this case, it will be automatically sorted according to nummberical order.

    auto it = st.find(3);
    
}


int main()
{

    Set();


    return 0;
}
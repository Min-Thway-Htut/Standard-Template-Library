#include <iostream>
#include <stack>
using namespace std;

void Stack()
{
    stack<string>st; //Declaring the stack
    st.push("Cristiano Ronaldo"); //Adding the very first item {"Cristiano Ronaldo"}
    st.push("Lionel Messi"); //Adding the second item {"Lionel Messi", "Cristiano Ronaldo"}
    st.push("Neymar"); //Adding the third item {"Neymar", "Lionel Messi", "Cristiano Ronaldo"}
    st.push("Bruno"); // Adding the fourth item {"Bruno","Neymar","Lionel Messi", "Cristiano Ronaldo"}
    st.push("Pele"); // Adding the fifth item  {"Pele", "Bruno","Neymar","Lionel Messi", "Cristiano Ronaldo"}

    cout << "The 4th runner up award goes to - "<< st.top() << "\n";
    st.pop();

    cout << "The 3rd runner up award goes to - "<< st.top() << "\n";
    st.pop();

    cout << "The 2nd runner up award goes to - "<< st.top() << "\n";
    st.pop();

    cout << "The 1st runner up award goes to - "<< st.top() << "\n";
    st.pop();

    cout << "The winner for the Player of the Century is - " << st.top() <<  "\n";

    cout << st.size() << "\n";
    cout << st.empty();


}

int main(){

    Stack();
    return 0;
}
#include <iostream>
#include <queue>
using namespace std;

void Queue(){
    queue<string>qu;
    qu.push("John");
    qu.push("Kathy");
    qu.push("Mohammad");
    qu.push("Fraddy");
    qu.push("James");

    cout << "The person who was waiting on the first spot is - " << qu.front() << "\n";
    qu.pop();

    cout << "The person who was waiting on the second spot is - " << qu.front() << "\n";
    qu.pop();

    cout << "The person who was waiting on the third spot is - " << qu.front() << "\n";
    qu.pop();

    cout << "The person who was waiting on the fourth spot is - " << qu.front() << "\n";
    qu.pop();

    cout << "The person who was waiting on the fifth spot is - " << qu.front() << "\n";


   //for(size_t i = 0; i <qu.size();i++)
   //{
   // cout << qu.front() << endl;
   // qu.push(qu.front());
   // qu.pop();
    
  // }

}

int main()
{

    Queue();
    return 0;
}
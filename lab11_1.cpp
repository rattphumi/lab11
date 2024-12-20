// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    string  Grade[] = {"A","B+","B","C+","C","D+","D","F","W"};

    cout << "Press Enter 3 times to reveal your future." << endl;
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9;
    cout << "You will get "<<Grade[x] << " in this 261102.";

    return 0;
}
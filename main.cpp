#include "Pila.cpp"

int main() {
    try {
        Pila <int > A;
        A.push(85);
        A.push(7);
        A.push(13);
        cout<< A.top()<<endl;
        A.pop();
        A.push(9);
        cout<< A.top()<<endl;
        A.pop();
        cout<< A.top()<<endl;
        A.pop();
        cout<< A.top()<<endl;
        //A.pop();
        //A.pop();
       // cout<< A.top()<<endl;
       Pila<string> B(10);
       B.push("Mario");
       B.push("Alice");
       cout<< B.top()<< endl;
       B.pop();
       B.push("Eve");
        cout<< B.top()<< endl;
    }
    catch (RuntimeException e) {
        cout<< "Error: "<<e.getMessage()<<endl;
    }
    return 0;
}

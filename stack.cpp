// stack using vextor
// #include<iostream>
// #include<vector>
// using namespace std;
// class Stack{
// vector<int>v;
// public:
// void push(int val){//0(1)
// v.push_back(val);
// }
// void pop(){//0(1)
// v.pop_back();
// }
// int top(){//0(1)
// return v[v.size()-1];
// }
// bool empty(){
//     return v.size()==0;
// }
// };
// int main(){
//     Stack s;
//     s.push(10);
//       s.push(20);
//         s.push(30);
//         while(!s.empty()){
// cout<<s.top()<<" ";
// s.pop();
//         }
//         cout<<endl;
// return 0;
// }
// stack using linklist
#include<iostream>
#include<list>
using namespace std;
class Stack{
list<int>ll;
public:
void push(int val){//0(1)
ll.push_front(val);
}
void pop(){//0(1)
ll.pop_front();
}
int top(){//0(1)
return ll.front();
}
bool empty(){
    return ll.size()==0;
}
};
int main(){
    Stack s;
    s.push(10);
      s.push(20);
        s.push(30);
        while(!s.empty()){
cout<<s.top()<<" ";
s.pop();
        }
        cout<<endl;
return 0;
}
// #include<iostream>
// #include<vector>
// #include<list>
// #include<stack>
// int main(){
// Stack<int>s;
//     s.push(10);
//       s.push(20);
//         s.push(30);
//         while(!s.empty()){
// cout<<s.top()<<" ";
// s.pop();
//         }
//         cout<<endl;
// return 0;
// }
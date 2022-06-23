#include<bits/stdc++.h>
using namespace std;
int stack[100],ind;
void push(int x)
{
    ++ind;
    stack[ind]=x;
    
}
void pop()
{
    stack[ind]=0;
    --ind;
}
bool is_empty()
{
    if(ind>=1) return false;
    else return true;
}
void top()
{
    return stack[ind];
}
int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    
    push(1);
    push(2);
   if(is_empty()== true) cout<<top();
    pop();
    pop();
    
    
    
    
    
    
    return 0;
}
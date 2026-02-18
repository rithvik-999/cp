#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a,x,y;
        cin>>a;
        cin>>x;
        cin>>y;
        if(x < y){
            if(a < x || a > y)
              cout<<"YES";
            else 
              cout<<"NO";
        }
        else{
            if(a < y || a > x)
              cout<<"YES";
            else 
              cout<<"NO";
        }
        cout<<"\n";
    }
    
    return 0;
}
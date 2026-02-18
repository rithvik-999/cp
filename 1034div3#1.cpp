#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int size;
        cin>>size;
        
        vector<int> s(4);
        for (int j = 0; j < size; j++)
        {
            s[j % 4]++;
        }
        if(s[0] == s[3] && s[1] == s[2]){
            cout<<"Bob"<<"\n";
        }
        else {
            cout<<"Alice"<<"\n";
        }
    }
    
    return 0;
}
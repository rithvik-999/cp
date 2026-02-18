#include<iostream>
#include<vector>

using namespace std;

int main(){
    int num;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        int n, l, k;
        cin>>n;
        cin>>l;
        cin>>k;
        int max = 0;
        vector<int> arr(n);
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
            if(max < arr[j])
              max = arr[j];
        }
        if(k == n || arr[l - 1] == max)
          cout<<"Yes"<<"\n";
        else if(k == 1 && max != arr[l - 1])
            cout<<"No"<<"\n";
        else{
            int count = n, j = 0;
            while (count > k)       
            {
                if(j == l - 1 || j == max)
                    continue;
                count--;
            }
            if(count > k)
                cout<<"No"<<"\n";
            else
                cout<<"Yes"<<"\n"; 
        }
    }
    
    return 0;
}
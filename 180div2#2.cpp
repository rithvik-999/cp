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
      vector<int> arr(size);
      for (int j = 0; j < size; j++)
        cin>>arr[j];
      int ans = -1;
      for(int i = 2; i < size; i++)
        if(min(arr[i - 2], arr[i - 1]) <= arr[i] && arr[i] <= max(arr[i - 2], arr[i - 1]))
          ans = 1;
      for(int i = 0; i < size - 2; i++)
        if(min(arr[i+2], arr[i+1]) <= arr[i] && arr[i] <= max(arr[i+2], arr[i+1]))
          ans = 1;
      for(int i = 1; i < size; i++)
        if(abs(arr[i - 1] - arr[i]) <= 1)
          ans = 0;
      cout<<ans<<"\n";
    }
    
    
    return 0;
}
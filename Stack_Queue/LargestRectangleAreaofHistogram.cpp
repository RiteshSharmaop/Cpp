#include<bits/stdc++.h>
using namespace std;
// Brute Force
void bruteForce(vector<int> &heights){
    int n = heights.size();
    int maxi = -1;
    for(int i = 0 ; i < n ; i++){
        int backRow = 0;
        for(int j = i-1 ; heights[j] >= heights[i] && j >= 0 ; j--){
            backRow++;
        }
        int row = 0;
        for(int j = i+1 ; heights[i] <= heights[j] && j < n ; j++){
            row++;
        }
        int area = (row + backRow + 1)*heights[i];
        // cout<<"AREA: "<<area<<endl;
        maxi = max(area, maxi);
    }
    cout<<maxi<<endl;

    // T.C. --> O(n^2)) 
}

// {3,6,5,2}
// {-1,3,3,2}
void prevSmalll(stack<int> &st,vector<int>  &heights){
    st.push(-1);
    vector<int> preSmall;
    int n = heights.size();
    for(int i = 0 ; i < n ; i++ ){
        int item = heights[i];
        while(st.top() > heights[i]){
                st.pop();
            }
        preSmall.push_back(st.top());
        st.push(heights[i]);
    }
    
    for(auto i : preSmall)cout<<i<<" ";
}
void optimise(vector<int>  &heights){
    stack<int> prevSmall;
    prevSmalll(prevSmall,heights);
}
int main() {
    vector<int> heights = {3,6,5,2};
    // bruteForce(heights);
    optimise(heights);
    return 0;
}
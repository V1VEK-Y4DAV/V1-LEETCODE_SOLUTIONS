class Solution {
private:
    vector<int> nextSmaller(vector<int> arr){
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);

        for(int i = n - 1; i >= 0; i--){
            while(st.top() != -1 && arr[st.top()] >= arr[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevSmaller(vector<int> vec){
        int n = vec.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);

        for(int i = 0; i < n; i++){
            while(st.top() != -1 && vec[st.top()] >= vec[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    int largerArea(vector<int> heights){
        int n = heights.size();
        vector<int> next(n);
        next = nextSmaller(heights);
        vector<int> prev(n);
        prev = prevSmaller(heights);

        int max_area = INT_MIN;

        for(int i = 0; i < n; i++){
            int length = heights[i];
            if(next[i] == -1){
                next[i] = n;
            }
            int breadth = next[i] - prev[i] - 1;
            int area = length * breadth;
            max_area = max(area, max_area);
        }
        return max_area;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
    if(matrix.empty() || matrix[0].empty()) return 0;

    vector<vector<int>> new_matrix;

    // Step 1: Convert char → int
    for(int i = 0; i < matrix.size(); i++){
        vector<int> temp;
        for(int j = 0; j < matrix[0].size(); j++){
            temp.push_back(matrix[i][j] - '0');
        }
        new_matrix.push_back(temp);
    }

    int n = new_matrix.size();
    int m = new_matrix[0].size();

    // Step 2: Build histogram in-place (using same new_matrix)
    for(int i = 1; i < n; i++){
        for(int j = 0; j < m; j++){
            if(new_matrix[i][j] != 0){
                new_matrix[i][j] += new_matrix[i-1][j];
            }
        }
    }

    // Step 3: Apply largest rectangle on each row
    int area = 0;
    for(int i = 0; i < n; i++){
        area = max(area, largerArea(new_matrix[i]));
    }

    return area;
}
};
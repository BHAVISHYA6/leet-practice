class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        stack<int> str;
        vector<int> ans;
        for (int i = 0; i < asteroids.size(); i++) {
            bool alive = true;
            if (!st.empty()) {
                while ( !st.empty() && st.top() > 0 && asteroids[i] < 0) {
                        if (abs(st.top()) > abs(asteroids[i])) {
                            alive = false;
                            break;
                        } else if (abs(st.top()) < abs(asteroids[i])) {
                            st.pop();
                        } else {
                            st.pop();
                            alive = false;
                            break;
                        }
                    }
                
            }
            if (alive)
                st.push(asteroids[i]);
        }
        while (!st.empty()) {
            str.push(st.top());
            st.pop();
        }
        while (!str.empty()) {
            ans.push_back(str.top());
            str.pop();
        }
        return ans;
    }
};
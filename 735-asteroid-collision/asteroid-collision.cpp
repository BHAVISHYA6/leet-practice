class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for (int i = 0; i < asteroids.size(); i++) {
            bool alive = true;
            if (!st.empty()) {
                while ( !st.empty() && st.back() > 0 && asteroids[i] < 0) {
                        if (abs(st.back()) > abs(asteroids[i])) {
                            alive = false;
                            break;
                        } else if (abs(st.back()) < abs(asteroids[i])) {
                            st.pop_back();
                        } else {
                            st.pop_back();
                            alive = false;
                            break;
                        }
                    }
                
            }
            if (alive)
                st.push_back(asteroids[i]);
        }
       
        return st;
    }
};
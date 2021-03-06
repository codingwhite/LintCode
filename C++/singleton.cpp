// Time:  O(1)
// Space: O(1)

// Thread-Safe, Lazy Initilization
class Solution {
public:
    /**
     * @return: The same instance of this class every time
     */
    static Solution* getInstance() {
        static Solution *instance = new Solution(); // C++ 11 thread-safe local-static-initialization
        return instance;
    }
private:
    Solution() {}
};

class Solution {
public:
    int countOperations(int num1, int num2) {
        int numOfOps = 0;  
        while (num1 != 0 && num2 != 0) {
            if (num1 >= num2) {
                num1 = num1 - num2;
                numOfOps += 1;
            } else {
                num2 = num2 - num1;
                numOfOps += 1;
            }
        }
    return numOfOps;
    }
};
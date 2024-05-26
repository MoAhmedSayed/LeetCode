class Solution {
public:
    int reverse(int x) {
        stack<int> numbersStack;
        int result = 0;
        while (x != 0) {
            int digit = x % 10;
            numbersStack.push(digit);
            x /= 10;
        }
        int numbersStackSize = numbersStack.size();
        for (int i = 0; i < numbersStackSize; i++) {
            if ((numbersStack.top() * pow(10, i) + result) > INT_MAX ||
                (numbersStack.top() * pow(10, i) + result) < -INT_MAX)
                return 0;

            result += numbersStack.top() * pow(10, i);
            numbersStack.pop();
        }
        return result;
    }
123

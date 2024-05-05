
#include <iostream>
int climbStairs(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int prev = 1, curr = 1;
    for (int i = 2; i <= n; i++) {
        int temp = curr;
        curr = prev + curr;
        prev = temp;
    }
    return curr;
}

int main()
{
    int num = 5;
    int result = climbStairs(num);
    return result;
}
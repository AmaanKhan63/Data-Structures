### You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

Find and return the `maximum` profit you can achieve.



>Example:
```dart
Input: prices = [7,1,5,3,6,4]
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
Total profit is 4 + 3 = 7.
```

>Solution:
```java
class Solution {
    public int maxProfit(int[] prices) {
        // a variable to append profits
        int profit = 0;

        // an outer loop for checking purchase feasibility for each day
        for (int i = 0; i < prices.length - 1; i++) {

            // keeping track of current day index to compare with future day values
            int currentPriceDayIndex = i;
            // index for the day where price is high
            int highestInUpcomingDayIndex = i + 1;
            for (int j = i + 1; j < prices.length; j++) {
                if (prices[j] > prices[highestInUpcomingDayIndex]) {
                    // index of the day when stock price will be maximum
                    highestInUpcomingDayIndex = j;
                } else {
                    // breaking the loop if we will not get any profit in upcoming days
                    break;
                }

            }
            // checking if there was any profit in selling
            if (prices[highestInUpcomingDayIndex] > prices[currentPriceDayIndex]) {
                profit += prices[highestInUpcomingDayIndex] - prices[currentPriceDayIndex];
            }
        }
        return profit;
    }
}
```

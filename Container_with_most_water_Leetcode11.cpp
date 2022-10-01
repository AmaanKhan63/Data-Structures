/* You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store. 
*/


// solution

class Solution {
public:
    int maxArea(vector<int>& height) {
       
        int n = height.size();
        int i=0, j = n-1;  // initialize 2 pointers to two ends of array
        int maxarea = INT_MIN;
        
       while(i<j)
       {
          int area = (j-i)* min(height[i], height[j]); // calculate area of the current heights
          maxarea = max(area, maxarea);  //maximise the area
           
          if(height[i]>height[j])  // move the pointer pointing to small height
              j--;
           else
              i++;
    
       }
        
        return maxarea;
    }
};
    }

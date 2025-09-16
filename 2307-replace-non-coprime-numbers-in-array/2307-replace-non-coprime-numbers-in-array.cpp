// class Solution {
// public:
//     int gcd(int a, int b){
//         if(a==0) return b;
//         if(b==0) return a;
//         while(a && b){
//             if(a>b) a=a-b;
//             else b=b-a;
//         }
//         return a>b?a:b;
//     }
//     vector<int> replaceNonCoprimes(vector<int>& nums) {
//         int i=0;
//         while(i<nums.size()-1){
//             int ele=nums[i];
//             int ele2=nums[i+1];
//             int gcdOfNums=gcd(ele,ele2);
//             if(gcdOfNums>1){
//                int rep=(1LL*ele*ele2)/gcdOfNums;
//                 nums[i]=rep;
//                 nums.erase(nums.begin()+i+1);
//                 i=0;#include <vector>
// #include <numeric>

class Solution {
public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    std::vector<int> replaceNonCoprimes(std::vector<int>& nums) {
        std::vector<int> result;
        for (int num : nums) {
            result.push_back(num);
            while (result.size() > 1) {
                long long last = result.back();
                long long second_last = result[result.size() - 2];
                long long common_divisor = gcd(last, second_last);
                
                if (common_divisor == 1) {
                    break;
                }
                
                result.pop_back();
                result.back() = (last * second_last) / common_divisor;
            }
        }
        return result;
    }
};
//             }
//             else i++;
//         }
//         return nums;
//     }
// };
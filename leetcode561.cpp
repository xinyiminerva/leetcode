class leetcode561{
    public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0, n = nums.size();
        vector<int> map(20001, 0);
        
        for(int i = 0; i < n; i++) map[nums[i]+10000]++;
        
        bool flag = true;
        for(int i = 0, ct = 0; ct < n; i++){
           while(map[i]-- > 0){
               if(flag){
                   sum += i - 10000;
               }
               flag = !flag;
               ct++;
           }
        }

        return sum;
    }
};
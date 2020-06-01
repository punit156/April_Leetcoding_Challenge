class Solution {
public:
    bool Square(int x, int &count)
    {
        int rem;
        int sum = 0;
        while(x>0)
        {
            rem = x%10;
            sum += (rem*rem);
            x/=10;
        }
        if(count==0)
        {
            return false;
        }
        if(sum==1)
        {
            return true;
        }
        else
        {
            count--;
            return Square(sum,count);
        }
        
    }
    bool isHappy(int n) {
        int count = 50;
        return Square(n,count);
    }
};
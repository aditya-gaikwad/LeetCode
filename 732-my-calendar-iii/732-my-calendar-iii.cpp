class MyCalendarThree {
public:
    map<int,int> M;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        M[start]++;
        M[end]--;
        int sum=0;
        int maxBooking=0;

        for(auto it = M.begin();it != M.end();it++)
        {
            sum += it->second;
            maxBooking=max(maxBooking,sum);

        }

        return maxBooking;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */
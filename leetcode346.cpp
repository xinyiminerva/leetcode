class leetcode346{
 private:
 queue<int> q;
 int avgsize;
 double sum;
 public:
 MovingAverage(int size): avgsize(size), sum(0) {}
 double next(int val) {
     sum += val;
     q.push(val);
     int qsize = (int)q.size();
     if(qsize <= avgsize) {
         return sum/qsize;
     }else
     {
        sum -= q.front();
        q.pop();
        return sum/avgsize;
     }
 }
}
// Forward declaration of ArrayReader class.
//class ArrayReader;
class leetcode702{
    public:
   int search (const ArrayReader& reader, int target) {
       int num, middle, l=0, r = 2147483647;
       while(l <= r) {
           middle = l + (r-l)/2;
           num = reader.get(middle);
           if(num > target) r = middle - 1;
           else if(num < target) l = middle + 1;
           else return middle;
       }
       return -1;
   }
}
class Solution {
public:
    int abso(int a){
        if(a<0) return -a;
        return a;
    }
    int findClosest(int x, int y, int z) {
       int person1=abso(z-x);
       int person2=abso(z-y);
       if(person1<person2) return 1;
       else if(person1>person2) return 2;
       return 0;
    }
};
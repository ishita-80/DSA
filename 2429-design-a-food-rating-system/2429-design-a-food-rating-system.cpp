class FoodRatings {
public:
    unordered_map<string,vector<int>>mpp1;
    unordered_map<string,int>mpp2;
    vector<string>foods;
    vector<string>cuisines;
    vector<int>ratings;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        this->foods = foods;
        this->cuisines = cuisines;
        this->ratings = ratings;
        for(int i=0;i<cuisines.size();i++){
            mpp1[cuisines[i]].push_back(i);
            mpp2[foods[i]]=i;

        }
    }
    
    void changeRating(string food, int newRating) {
        ratings[mpp2[food]]=newRating;
        return;
    }
    
    string highestRated(string cuisine) {
        
        vector<int>&rate=mpp1[cuisine];
        int high=ratings[rate[0]];
        int index=rate[0];
        for(int i=1;i<rate.size();i++){
            if(high<ratings[rate[i]]){
                high=ratings[rate[i]];
                index=rate[i];

            }
            else if(high==ratings[rate[i]]){
                if(foods[index]>foods[rate[i]]){
                    index=rate[i];
                }
            }
           
        }
        return foods[index];
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */
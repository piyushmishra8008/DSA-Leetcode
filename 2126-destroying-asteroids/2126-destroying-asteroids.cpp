class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        int MASS=mass;
        for(int i=0;i<asteroids.size();i++){
            if(MASS<asteroids[i]){
                return false;
            }else if(MASS>=1e5){
                return true;
            }
            else{
                MASS+=asteroids[i];
            }
        }
        return true;
    }
};
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

     stack<int> s;
     vector<int> ans;
    

     for(int i=0; i< asteroids.size(); i++){
     bool skip = false;
        
        while(!s.empty() && asteroids[i] < 0 && (asteroids[i]*s.top()) < 0 ){
            if( abs(s.top()) <= abs(asteroids[i]) ){
                
                if(abs(s.top()) == abs(asteroids[i]) ){
                    skip=true;
                    s.pop();
                    break;
                }
                s.pop();
            }else{
                skip = true;
                break;
            }
        }

        if(!skip){
        s.push(asteroids[i]);
        }
     }   

     while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
     }

     reverse(ans.begin(), ans.end());
     return ans;
    }
};
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) 
    {
        int n = ceil((double)s.size() / k);
        // cout << n;
        vector<string> V(n); // initialized with size
        int l = 0;

        //cout << "Main func" << endl;

        for (int i = 0; i < n; i++)
        {
            //cout << "Father loop" << endl;
            for (int j = 0; j < k && l < s.size(); j++)
            {
                //cout << s[l] << endl;
                V[i].push_back(s[l]);
                l++;
            }
            if(V[i].size() < k)
            {
                for(;;)
                {
                    if(V[i].size() == k)
                    {
                        break;
                    }
                    V[i].push_back(fill);
                }
            }
        }
        return V;
    }
    

    
};

/*
--> made from key value pairs
--> keys are unique but values can repeat 
--> key cannot repeat and stored in sorted order as sets

*/

    map<int, int> mpp1;                                     // {key,value}
        mpp1[1] = 2;         // inside memory it will store as { 1 , 2 }
        mpp1.insert({2, 4}); // new pair {2,4}
        mpp1.emplace(3, 1);  // same new pair
        cout<<mpp[5]; // if DNE then prints 0

    map<pair<int, int>, int> mpp;
        mpp[{2, 4}]=10; //key={2,4} value=10
    
    map<int, pair<int, int>> mpp;
    
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    auto it = mpp.find(3);
    cout<<*(it).second;

    auto it = mpp.lower_bound(2); // Points to key 
    auto it = mpp.upper_bound(3); // Points to key 



   set<int> window;
        int ans =0;
        int sum = 0;

        for(auto i = 0; i < arr.size(); i++) {
            
            if(window.find(arr[i]) != window.end()) {
          
              sum  =  accumulate(window.begin(), window.end(),0);
            }

            ans = max(ans, sum);
                    window.insert(arr[i]);

        }
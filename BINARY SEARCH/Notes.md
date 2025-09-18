lower_bound = smallest index such that arr[idx]>= target ================ lower_bound(arr.begin(),arr.end(),target)-arr.begin();

upper_bound = smallest index such that arr[idx]>target

Main logic is we should alwaus try to skip search space
33 Leetcode
81
153
540
162

BS on answers we have to depict range of the possible answers .

ranges always be like yes , yes , yes , no , no , no where yes= possible answer , no = not possible or it might be no , no ,...,yes

so l = (yes => no) and r = (no => yes) ; iski wajah se we don't need to store answer seperately we can also directly return r or l .

Find POW

```
    int find(int num,int n){
        int res=1;
        while(n>0){
            if(n%2){
                res=res*num;
                n--;
            }
            else{
                num*=num;
                n/=2;
            }
        }
        return res;
    }
```

875 - Koko eating bananas
1482 - min days to bloom all flowers

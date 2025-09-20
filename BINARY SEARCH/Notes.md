// Pattern 1

```
lower_bound = smallest index such that arr[idx]>= target ================ lower_bound(arr.begin(),arr.end(),target)-arr.begin();

upper_bound = smallest index such that arr[idx]>target

Main logic is we should alwaus try to skip search space
```

33 Leetcode
81
153
540
162

// Pattern 2

```
BS on answers we have to depict range of the possible answers .(finding min or max)

range should always be like yes , yes , yes , no , no , no where yes= possible answer , no = not possible or it can be no , no ,...,yes

so l = (yes => no) and r = (no => yes) ; iski wajah se we don't need to store answer seperately we can also directly return r or l .


Find POW

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
1101 - Ship Capacity to ship packages within D days
1539 - kth missing +ve num (Pending)

// Pattern 3

```
find min of max || max of min
we have to think question in the term of thing that is begin asked
jese aggressive cows me (min b/w any two cows)distance ko max krna tha to hamne distance ko lekar solution nikala
allocate min pages me bhi mene ese hi socha ki noOfPages h jo allocate krne h to usi ko lekar solution nikalenge
```

GFG - Aggressive Cows
GFG - Allocate Minimum Pages , 410 - split array largest sum ,Coding ninjas - painters partition (https://www.naukri.com/code360/problems/painter-s-partition-problem_1089557?leftPanelTabValue=PROBLEM)(similar)

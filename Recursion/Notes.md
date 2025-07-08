#ADITYA VERMA

make Smaller Input

identify - choices => decision

Make the recursion tree

first try to take decisions (ip op wala method chlega)

if unable then try to reduce input size ( IBH wala chlega)

Approaches for recusrion questions

=====================================
for medium

ip op method

we maintain op and ip

            op="" ip="ab"
        /                   \
    /                           \

op="" ip="b" op="a" ip="b"

=======================================

=====================================
mainly for easy
IBH(induction base hypothesis)

void print(n){
//Base
if(n==1){
cout<<"1";
return ;
}

//Hypothesis
print(n-1);

//Induction
cout<<n;
}

print(7)
|
print(6)
|
.
.
.

khud se niche wali cheez hame shi answer degi ye maan ke chalo
bas apna step shi karo niche wale ko call karo wo already shi answer degi esa ham maan chuke h
bas last me base condition shi likhni h

# ========================================

DP
choice diagram

=======================================

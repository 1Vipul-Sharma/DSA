#ADITYA VERMA

Try to make Input smaller
OR
identify - choices => decision

Make the recursion tree (nodes sirf recursive function ko indicate karne ke liye banate not for simple ones)

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

op="" ip="b" ,,,,,,,,,,,,,,,, op="a" ip="b"

kind of input space small karte jarhe h

choices h decision lerhe h usi basis par
basically yehi h suru ke index se decide karte chlenge ek baar generate krenge bina liye ek baar lenge

Is type ke method me sabse pehle try to make a recursion tree then write code

jab logic nhi likh pare ho to koi basic example lo tree bnao and then try to generalize it

=======================================

=======================================
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

EK to ese soch sakte
khud se niche wali cheez hame shi answer degi ye maan ke chalo
bas apna step shi karo niche wale ko call karo wo already shi answer degi esa ham maan chuke h
bas last me base condition shi likhni h

isse kaam na chle to try karo
n se n-1 ki transaction me kya hora h n-1 => n me aane ke lie kya karna hoga

# ========================================

DP
choice diagram

==========================================

# Try to check steps before calling recursion If it is valid to call or not

# break bigger into similar smaller problems ko recursion handle karlega

# Try out all possible combination

# Section 14 Challenge - Operator Overloading #

Overload the following operators in the provided Mystring class.

To gain experience overloading operators, you should do this challenge twice. 

First, overload the operators using member functions and then in another project overload the same operators again using non-member functions.

Please do it once using member methods and then again using non-member functions. 

Here is a list of some of the operators that you can overload for this class:

|-   |  unary minus. Returns the lowercase version of the object's string.
        
        s1|

|==  |   returns true if two strings are equal.

        (s1 == s2)|

|!=  |   returns true if two strings are not equal.

        (s1 != s2)|

|<   |   returns true if the lhs string is lexically less than the rhs string
        
        (s1 < s2)|

|>   |   returns true if the lhs string is lexically greater than the rhs string
        
        (s1 > s2)|

|+   |   concatenation, returns an object that concatenates the lhs and rhs
        
        s1 + s2|

|+=  |   concatenate the rhs string to lhs string and store the result in lhs object
        
        s1 += s2|

|*   |   repeat, results in a string that is copied n times
        
        s2 * 3;     ex: s2 = "abc"
                        
                        s1 = s2 * 3;
                        
                        s1 will result in "abcabcabc"|
                        

If you wish to overload the ++ and -- operators, remember that they have pre nad post versions.

Have fun! Think of other operators that might be useful. Don't worry if they all don't make sense -- this is an exercise about learning how to overload operators.

Hints:
1.  Take advantage of the std::strcmp function for the equality operators!
2.  The += and *= operators should return a Mystring &
3.  Rather than duplicate code in the += and *= functions use the + and * operators which you have already overloaded.
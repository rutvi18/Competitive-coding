int Solution::isPalindrome(int A) {

string str=to_string(A);

if(A<0) return false;

else if(A<10)return true;

for(int i=0;i<str.length();i++){

if(str[i]!=str[str.length()-i-1])return false;

}

return true;


}

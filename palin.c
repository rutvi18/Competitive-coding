/**
 * @input A : Integer
 * 
 * @Output Integer 0 / 1. Return 0 if the number is not palindrome, else return 1
 */
int isPalindrome(int A) {
    int rev = 0, temp = A;
    
    while (temp)
    {
        rev = rev * 10 + temp % 10;;
        temp /= 10;
    }
    
    return (A < 0 ? 0 : rev == A);
}


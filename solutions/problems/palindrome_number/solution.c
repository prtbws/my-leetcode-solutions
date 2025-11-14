bool isPalindrome(int num) {
    int original = num,digit;
    long rev=0;

    while(num>0){
        digit=num%10;
        rev=rev*10+digit;
        num = num/10;
    }
    if(original == rev)
        return 1;
    else
        return 0;
}

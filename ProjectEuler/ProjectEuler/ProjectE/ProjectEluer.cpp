//
//  ProjectEluer.cpp
//  ProjectEuler
//
//  Created by ahmad alhayek on 5/14/20.
//  Copyright © 2020 ahmad alhayek. All rights reserved.
//

#include "ProjectEluer.hpp"
int problem1(int belowNumber){ // taking an input
    int result = 0; // the returning value
    for (int i = 1 ; i < belowNumber ; i++) { // loop till the end
        if ( i% 3 ==0 || i%5 == 0){ // if divsable by 3 or 5 add it to result
            result += i;
        }
    }
    return result;
}

long problem2() {
    int fib2 = 1 ;
    int fib1 = 1;
    int result = 0;
    
    while (result < 4000000){
        
        int temp = fib1+fib2;
        fib1 = fib2;
        fib2 = temp;
        if (fib2 %2 == 0){
            result+= fib2;
        }
        
    }
    return result ;
    
}

int problem4()
{
    int firstNumber = 999;
    
    int max_palindrome = 0;
    
    for (firstNumber ; firstNumber > 100 ; firstNumber--) {
        int product = firstNumber * firstNumber;
        if (isPalindromic(product) && product > max_palindrome){
            max_palindrome = product;
            
        }
        for(int i  = firstNumber -1 ; i > 100 ; i--){
            product = firstNumber*i;
            if (isPalindromic(product) ){
                if (product > max_palindrome){
                    max_palindrome = product;
                }
                else {
                    break;
                }
                
            }
            
            
        }
        
        
    }
    return max_palindrome;
    
    
}

bool isPalindromic(int number)
{
    std::string numberString = std::to_string(number); // convert to_string
    
    for (int i =0 ; i <= numberString.length()/2 ; i++)
    {
        if(numberString.at(i) != numberString.at(numberString.length() -1 -i)){
            return false;
            
        }
    }
    return true;
    
}
int problem5()
{
    for (int i = 2520 ; i < INT_MAX ; i+=5){
        if (divisible1To20(i)){
            return i;
        }
        
    }
    return 0;
}
bool divisible1To20(int number)
{
    for (int i  = 1 ; i < 21 ; i++) {
        if (number % i != 0 ){
            return false;
        }
    }
    return true;
}



int problem6(int number )
{
    return sqaure_of_sum( number ) - sum_of_squares( number);
    
}

int sum_of_squares(int number)
{
    int answer = 0;
    for (int i = 1 ; i <number+1 ; i++){
        answer += pow(i,2 );
        
    }
    return answer;
}


int sqaure_of_sum(int number )
{
    int answer = 0;
    for (int i = 1 ; i <number+1 ; i++){
        answer += i;
        
    }
    return pow(answer,2);
}


long problem8(std::string str , int  number){
    long answer = 0;
    
    for (int i = 0 ; i < str.length() - number +1  ;i++ ) {
        
        
        std::string subString = str.substr(i,number);
        std::cout<< subString << std::endl;
        long temp = 1;
        for (int j = 0 ; j < subString.length() ; j++) {
            temp = temp * ( long(subString.at(j)) - 48 ) ;
            
        }
        std::cout<< temp << std::endl;
        
        
        if (temp > answer ){
            answer = temp ;
            
            
        }
    }
    
    
    return answer;
}


int pythagoreanTriplet(int target) {
    
    int n = 1;
    int m = 2;
    int predict = 0;
    int answer = 0;
    while ( predict != target) {
        if (predict < target) {
            m += 2;
            n++;
        }
        else if (predict >target){
            m--;
            n--;
        }
        
        
        
        
        int a = pow(m,2) - pow(n,2);
        int b  = (m*n)*2 ;
        int c =pow(m,2) +pow(n,2);
        predict = a + b+c ;
        answer = a*b*c;
        
        
        
    }
    
    return answer;
    
}
long sumOfPrimes(int below){
    long answer = 2;
    
    for (int i =3 ; i < below ; i+= 2 ) {
        if (isPrime(i) ) {
            answer+=i;
        }
    }
    return answer;
    
}
bool isPrime(int number){
    
    for (int i = 3 ; i < sqrt(number)+1 ; i+=2) {
        if ( number % i ==0) {
            return false;
        }
    }return true;
}


int  problem51(){
    std::set<int> primeNumberSet = findallprimes();
    for (std::set<int>::iterator it = primeNumberSet.begin() ; it!= primeNumberSet.end() ; ++it){
        //begin iterating throw the set
        
        
        
        std::string primeString = std::to_string(*it);
        
        if(primeString.length() <5 ){
            continue;
        }
        
        std::vector<std::string> allPosibilites = genStrings(primeString , 0 , true);
        
        for (auto s : allPosibilites){
            
            int count = 0;
            int answer = 0;
            for (int i = 9 ; i> -1 ; i-- ){
                if (i+count <7){
                    break;
                }
                std::string temp = s;
                std::size_t found = temp.find("*");
                while (found != std::string::npos) {
                    temp[found] = i+48;
                    found = temp.find("*");
                }
                if(temp.front() == '0') {
                    continue;
                }
                
                std::stringstream converter(temp);
                int isPrime ;
                converter>>isPrime;
                if (auto t = primeNumberSet.find(isPrime) != primeNumberSet.end()){
                    count++;
                    answer = isPrime;
                }
                
                
            }
            if (count >= 8) {
                return answer ;
            }
            
        }
        
        
        
        
        
        
        
        
    }
    
    
    return 0;
}



bool AKSprimalityTest(int n) {
    if (n == 1)
        return false;
    if (n==2)
        return true;
    if (n==3)
        return true;
    
    if ( n%2 == 0 )
        return false;
    if (n%3 == 0 )
        return false;
    
    int i = 5;
    int w =2;
    while (i*i <=n){
        if (n%i == 0)
            return false;
        i += w;
        w = 6-w;
        
    }
    return true;
}

int* generatePrimeNumber(int k) {
    int arr [2];
    arr[0] = (6 * k ) -1;
    arr[1] = (6*k) +1;
    return &arr[0];
    
}

std::set<int> findallprimes(){
    std::set<int> primeSet;
    primeSet.insert(2);
    for (int i =3 ; i < 1000000 ; i++){
        bool found  =false;
        for (std::set<int>::iterator it=primeSet.begin(); it!=primeSet.end(); ++it){
            if (i% *it ==0) {
                found = true;
                break;
                
            }
            if (*it * *it > i){
                break;
            }
            
        }
        if (!found)
            primeSet.insert(i);
    }
    return primeSet;
}

std::string replaceCharWithAsterisk(std::string s , int index) {
    s.at(index) = '*';
    return s;
}
std::vector<std::string> genStrings(std::string s , int index , bool clear){
    
    static std::vector<std::string> possibilites;
    if (clear){
        possibilites.clear();
    }
    
    if (index > 0 ) {
        possibilites.insert(possibilites.end(), s);
    }
    for (int i = index ; i<s.length(); i++ ) {
        genStrings(replaceCharWithAsterisk(s, i), i+1, false);
        
    }
    return possibilites;
    
}



int longestSumConsecutivePrime(int prime,std::set<int> primeSet){
    int max = 0;
    int total = 0;
    auto j = primeSet.begin();
    int numFor = 0;
    int numFor2 = 0;
    for(auto it = primeSet.begin() ; it != primeSet.end() ; ++it){
        
        
        for (; j != primeSet.end() ; ++j){
            
            if (total>prime){
                break;
            }
            else if(total == prime) {
                if(max <numFor2 - numFor){
                    max =numFor2 - numFor;
                    
                }
                
            }
            numFor2++;
            total += *j;
            
        }
        total = total -*it;
        numFor++;
        
    }
    return max;
    
}
int findTheLongestSum(){
    std::set<int> primesNumbers = findallprimes();
    int max = 0;
    int num = 0;
    int i = 0;
    auto it = primesNumbers.end();
    it--;
    for (; it != primesNumbers.begin() ; --it){
        int temp =longestSumConsecutivePrime(*it,primesNumbers);
        if(max<  temp){
            max = temp;
            num = *it;
        }
        i++;
        if (i==1000)
            break;
    }
    return num;
}

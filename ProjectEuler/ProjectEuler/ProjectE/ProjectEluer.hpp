//
//  ProjectEluer.hpp
//  ProjectEuler
//
//  Created by ahmad alhayek on 5/14/20.
//  Copyright © 2020 ahmad alhayek. All rights reserved.
//

#ifndef ProjectEluer_hpp
#define ProjectEluer_hpp

#include <stdio.h>
#include <iostream>
#include <set>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>
#include <chrono>
int problem1(int belowNumber); // project Eluer problem 1 find multiples of 3 and 5
long problem2(); //project eluer problem 2 find the sum of the even-valued terms
int problem4();//Find the largest palindrome made from the product of two 3-digit numbers.
bool isPalindromic(int number); // check if a number is a palindromic number


//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
int problem5();
bool divisible1To20(int number);



//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
int problem6(int number);

int sum_of_squares(int number) ;
int sqaure_of_sum(int number );


long problem8(std::string str , int number);


int pythagoreanTriplet(int target); //problem9


long sumOfPrimes(int below); // problem 10

bool isPrime(int number);

int  problem51();
bool AKSprimalityTest(int n);
int* generatePrimeNumber(int k);
std::set<int> findallprimes();
std::string replaceCharWithAsterisk(std::string s , int index);
std::vector<std::string> genStrings(std::string s , int index , bool clear);
int longestSumConsecutivePrime(int prime,std::set<int> primeSet);
int findTheLongestSum();

#endif /* ProjectEluer_hpp */

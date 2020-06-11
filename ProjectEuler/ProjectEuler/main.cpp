//
//  main.cpp
//  ProjectEuler
//
//  Created by ahmad alhayek on 5/14/20.
//  Copyright © 2020 ahmad alhayek. All rights reserved.
//


#include "ProjectEluer.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    /*
     std::cout << "Hello, World!\n";
     std::cout << problem1(1000)<<std::endl;
     
     std::cout << problem2()<<std::endl;
     
     std::cout << problem4() << std::endl;
     std::cout << problem5() << std::endl;
     
     std::string str_number="7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
     //std::cout << problem6(100) << std::endl;
     std::cout << problem8(str_number ,  13) << std::endl;
     
     std:: cout << pythagoreanTriplet(1000) << std::endl;
     std::cout<<sumOfPrimes(2000000)<< std::endl;
     
     std::set<int> myset;
     myset.insert(1);
     myset.insert(2);
     myset.insert(3);
     myset.insert(4);
     std::set<int>::iterator it = myset.find(5);
     
     */
    //int *p  = (generatePrimeNumber(1));
    
    
    /*
     auto start = std::chrono::high_resolution_clock::now();
     std::cout << problem51()  <<std::endl;
     auto stop = std::chrono::high_resolution_clock::now();
     auto d = ((stop-start) );
     std::cout << d.count()<<std::endl;
     
     
     */
    auto start = std::chrono::high_resolution_clock::now();
    auto stop = std::chrono::high_resolution_clock::now();
  
    std::cout<<findTheLongestSum()<<std::endl;
    
    auto duration = (stop - start);
    
      std::cout << "Time taken by function: "
           << duration.count() << " microseconds" << std::endl;
    
  /*  while(i!=*total){
        i=0;
        --total;
        begining = primesNumbers.begin();
        
        for (auto it = primesNumbers.begin() ; it != primesNumbers.end() ; ++it){
            
            i+=*it;
            if (i==*total){
                break;
            
            }
            while(i > *total && begining!=primesNumbers.end()){
                i = i - *begining;
                ++begining;
            }
           
            
            
        }
        std::cout<<*total<<std::endl;
        std::cout<<i<<std::endl;
    }
    
   */
    
    
    
    
    
    return 0;
}



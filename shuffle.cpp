#include <iostream>
#include <vector>
#include <limits>
#include <ctime>

// linear congruential generator to produce pseudo random numbers
unsigned int LCG_random(unsigned int &seed){
    //commmonly used parameters sourced from Wikipedia: https://en.wikipedia.org/wiki/Linear_congruential_generator
    const unsigned int a = 1664525; //multiplier
    const unsigned int c = 1013904223; //increment
    return (a*seed+c); //same as (a*seed+c)%2^32
}


int main(){
    int n;
    // starting a loop to prompt the user until a valid input is given
    while(true){
        // prompt the user to input a positive integer
        std::cout<<"Enter a positive integer n (n>0): ";
        // get user input in n
        std::cin>>n;
        // if input is not an integer
        if (std::cin.fail()){
            std::cout<<"Invalid input! Please enter a positive integer (1,2,3,...)\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        // if input is valid (a positive integer) then exit the loop
        else if(n>0){
            break;
        }
        // if input is 0 or a negative integer
        else{
            std::cout<<"Please enter a positive integer (n>0).\n";
        }
    }

    // a list of integers from 1 to n 
    std::vector<int> shuffled(n);
    for (int i=0;i<n;i++){
        shuffled[i]=i+1;
    }
    // randomly shuffle the list of integers 1...n using fisher yates algorithm
    unsigned int s = static_cast<unsigned int>(time(0));
    for(int i=n-1;i>0;i--){
        s = LCG_random(s);
        int j = s%(i+1);
        // swap shuffled[i] with the element at random index
        //std::swap(shuffled[i], shuffled[j]);
        int t = shuffled[i];
        shuffled[i]=shuffled[j];
        shuffled[j]=t;
    }


    // output the integers 1..n after shuffling
    for(size_t i=0;i<shuffled.size();i++){
        std::cout<<shuffled[i];
        if(i!=shuffled.size()-1){
            // separated with a comma
            std::cout<<",";
        }
    }

    return 0;
}
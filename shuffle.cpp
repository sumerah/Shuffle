#include <iostream>
#include <vector>
#include <limits>
#include <cstdlib>
#include <ctime>
#include <algorithm> //to use the shuffle function


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
            std::cout<<"Invalid input! Please enter a positive integer (1,2,3,...)";
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
    // randomly shuffle the list of integers 1...n
    std::srand(static_cast<unsigned int>(std::time(0))); //seed random number generator to truly randomize
    std::random_shuffle(shuffled.begin(),shuffled.end());


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
import time

# linear congruential generator to produce pseudo random numbers
def LCG_random(seed):
    # commmonly used parameters sourced from Wikipedia: https://en.wikipedia.org/wiki/Linear_congruential_generator
    a= 1664525 #multiplier 
    c=1013904223 #increment
    m=2**32 #modulus
    return (a*seed+c)%m


def main():
    # starting a loop to prompt the user until a valid input is given
    while True:
        try:
            # prompt the user to input a positive integer
            n = int(input("Enter a positive integer n (n>0): "))
            # if input is valid (a positive integer) then exit the loop
            if n>0:
                break
            # if input is 0 or a negative integer
            else:
                print("Please enter a positive integer (n>0).")
            
        # if input is not an integer
        except ValueError:
            print("Invalid input! Please enter a positive integer (1,2,3,...)")
        # any other unexpected errors
        except Exception as e:
            print("Error! Please try again.")
        
    # a list of integers from 1 to n 
    shuffled = list(range(1,n+1))
    # randomly shuffle the list of integers from 1 to n using fisher yates algorithm
    s= int(time.time()*1000000) & 0xffffffff #convert time to microseconds then convert to integer then mask to 32 bits
    for i in range(n-1,0,-1):
        s = LCG_random(seed) 
        j =s%(i+1)
        # swap shuffled[i] with the element at random index
        shuffled[i], shuffled[j] = shuffled[j], shuffled[i]
    
    # output the integers 1..n after shuffling
    # * operator used to print each integer individually, separated with a comma
    print(*shuffled, sep=", ")


if __name__ == "__main__":
    main()
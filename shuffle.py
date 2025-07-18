import random # to use the shuffle function

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
    # randomly shuffle the list of integers 1...n
    random.shuffle(shuffled)
    
    # output the integers 1..n after shuffling
    # * operator used to print each integer individually, separated with a comma
    print(*shuffled, sep=", ")


if __name__ == "__main__":
    main()
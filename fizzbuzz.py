def fizzbuzz(n: int):
    if n % 15 == 0:
        print("FizzBuzz")
    elif n % 3 == 0:
        print("Fizz")
    elif n % 5 == 0:
        print("Buzz")
    else:
        print(n)

def main():
    for i in range(1, 101):
        fizzbuzz(i);

if __name__ == "__main__":
    main()

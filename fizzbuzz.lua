local function fizzbuzz(n)
   if n % 15 == 0 then print("FizzBuzz")
   elseif n % 3 == 0 then print("Fizz")
   elseif n % 5 == 0 then print("Buzz")
   else print(n)
   end
end

for i = 1, 100 do
   fizzbuzz(i)
end
